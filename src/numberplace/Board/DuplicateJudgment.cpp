#include <numberplace/Board.hpp>

using namespace numberplace;

bool Board::DuplicateJudgment(Squares s)
{
    for(auto a1 = s.begin() ; a1 < s.end() ; a1++)
    {
        for(auto a2 = a1 + 1 ; a2 < s.end() ; a2++)
        {
            if(
                (*a1).get().GetDisplay().GetKind()!=Number::KIND::NONE
                &&
                (*a2).get().GetDisplay().GetKind()!=Number::KIND::NONE
                &&
                (*a1).get().GetDisplay().GetKind()==(*a2).get().GetDisplay().GetKind()
            )
            return true;
        }
    }

    return false;
}

bool Board::DuplicateJudgment()
{
    for(auto& a1:this->m_largerow   ) for(auto& a2:a1                 ) if(Board::DuplicateJudgment(a2                                )) return true;
    for(auto& a1:this->m_largecolumn) for(auto& a2:a1                 ) if(Board::DuplicateJudgment(a2                                )) return true;
    for(auto& a1:this->m_largerow   ) for(auto& a2:this->m_largecolumn) if(Board::DuplicateJudgment(Board::ProductRowAndColumn(a1, a2))) return true;

    return false;
}
