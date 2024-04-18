#include <numberplate/Square.hpp>

using namespace numberplate;

Number Square::GetDisplay()
{
    if(this->m_question)
        return this->GetCorrect();

    return this->GetAnswer();
}
