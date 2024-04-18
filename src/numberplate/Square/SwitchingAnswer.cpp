#include <numberplate/Square.hpp>

using namespace numberplate;

Square& Square::SwitchingAnswer()
{
    this->m_question = false;
    return *this;
}
