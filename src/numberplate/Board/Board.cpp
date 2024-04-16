#include <numberplate/Board.hpp>

using namespace numberplate;

Board::Board():
m_squares(),
m_largerow(),
m_largecolumn(),
m_midentifier()
{
    for(unsigned int i = 0 ; i < 9*9 ; i++) this->m_squares.    push_back(Square ());
    for(auto& s : this->m_squares)          this->m_midentifier.GetID    (s.GetID());

    for(unsigned int i = 0 ; i < 3 ; i++) this->m_largerow.   push_back(SmallRow   ());
    for(unsigned int i = 0 ; i < 3 ; i++) this->m_largecolumn.push_back(SmallColumn());
    for(unsigned int i = 0 ; i < 9 ; i++) this->m_largerow   [i/3].push_back(Squares());
    for(unsigned int i = 0 ; i < 9 ; i++) this->m_largecolumn[i/3].push_back(Squares());

    for(unsigned int y = 0 ; y < 9 ; y++) for(unsigned int x = 0 ; x < 9 ; x++)
    {
        this->m_largerow   [x/3][x%3].push_back(this->m_squares[x+y*9]);
        this->m_largecolumn[y/3][y%3].push_back(this->m_squares[x+y*9]);

        this->m_squares[x+y*9].GetCorrect().GetKind() = static_cast<Number::KIND>((x+(y%3)*3+(y/3))%9+1);
    }
}
