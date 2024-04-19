#include <numberplace/Square.hpp>

using namespace numberplace;

Square& Square::SetNumber(Number::KIND nk)
{
    if(this->m_question)
        return *this;

    this->GetAnswer().GetKind() = nk;

    return *this;
}
