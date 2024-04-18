#include <numberplace/Square.hpp>

using namespace numberplace;

Square& Square::SwitchingQuestion()
{
    this->m_question = true;
    return *this;
}
