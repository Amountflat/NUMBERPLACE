#include <random>
#include <numberplate/Board.hpp>

static std::random_device rd;
static std::mt19937 mtrand(rd());

using namespace numberplate;

void Board::Shuffle()
{
    unsigned int buf;
    for(unsigned int i = 0, max = (mtrand()%128)+7 ; i < max ; i++)
    {
        switch(mtrand()%4)
        {
            case 0: this->m_largerow   [mtrand()%3].swap(this->m_largerow   [mtrand()%3]); break;
            case 1: this->m_largecolumn[mtrand()%3].swap(this->m_largecolumn[mtrand()%3]); break;

            case 2: this->m_largerow   [buf=mtrand()%3][mtrand()%3].swap(this->m_largerow   [buf][mtrand()%3]); break;
            case 3: this->m_largerow   [buf=mtrand()%3][mtrand()%3].swap(this->m_largerow   [buf][mtrand()%3]); break;
        }
    }
}
