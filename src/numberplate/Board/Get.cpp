#include <numberplate/Board.hpp>

using namespace numberplate;

Square& Board::Get(unsigned int x, unsigned int y)
{
    return this->ProductSet(this->m_largerow[(x/3)%3][x%3], this->m_largecolumn[(y/3)%3][y%3])[0].get();
}
