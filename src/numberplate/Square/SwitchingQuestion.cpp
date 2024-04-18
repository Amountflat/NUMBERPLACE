#include <numberplate/Square.hpp>

using namespace numberplate;

Square& Square::SwitchingQuestion()
{
    this->m_question = true;
    return *this;
}
