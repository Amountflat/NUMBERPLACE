#include <numberplace/Square.hpp>

using namespace numberplace;

Number Square::GetDisplay()
{
    if(this->m_question)
        return this->GetCorrect();

    return this->GetAnswer();
}
