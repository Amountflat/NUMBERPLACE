#include <algorithm>
#include <numberplace/Board.hpp>

using namespace numberplace;

Board& Board::AutomaticAnswer()
{
    bool loop;
    auto EraseDuplicateNumber = [](Square& target, Squares others)
    {
        bool r = false;

        if(target.GetMemoNumbers().size() <= 1) return r;

        for(auto o : others)
        {
            if(o.get().GetDisplay().GetKind()!=Number::KIND::NONE&&std::find(target.GetMemoNumbers().begin(), target.GetMemoNumbers().end(), o.get().GetDisplay())!=target.GetMemoNumbers().end())
            {
                target.SetNumber(o.get().GetDisplay().GetKind());
                r = true;
            }
        }

        return r;
    };

    for(auto& a1:this->m_squares)
    {
        if(!a1.GetQuestion())
            a1
                .SwitchingAnswer()
                .SwitchingMemo()
                .SetNumber(Number::KIND::N_1)
                .SetNumber(Number::KIND::N_2)
                .SetNumber(Number::KIND::N_3)
                .SetNumber(Number::KIND::N_4)
                .SetNumber(Number::KIND::N_5)
                .SetNumber(Number::KIND::N_6)
                .SetNumber(Number::KIND::N_7)
                .SetNumber(Number::KIND::N_8)
                .SetNumber(Number::KIND::N_9);
    }

    do
    {
        loop = false;

        for(unsigned int lr = 0 ; lr < 3 ; lr++) for(unsigned int lc = 0 ; lc < 3 ; lc++) for(unsigned int sr = 0 ; sr < 3 ; sr++) for(unsigned int sc = 0 ; sc < 3 ; sc++)
        {
            if(EraseDuplicateNumber(this->Get(lr*3+sr, lc*3+sc), Board::SumSet(Board::SumSet(this->m_largerow[lr][sr], this->m_largecolumn[lc][sc]), Board::ProductRowAndColumn(this->m_largerow[lr], this->m_largecolumn[lc]))))
                loop = true;
        }
    }
    while(loop);
    

    return *this;
}
