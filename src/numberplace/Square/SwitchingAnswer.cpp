#include <numberplace/Square.hpp>

using namespace numberplace;

Square& Square::SwitchingAnswer()
{
    this->m_question = false;
    this->m_memo.clear();
    return *this;
}
