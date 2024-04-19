#include <numberplace/Square.hpp>

using namespace numberplace;

Square& Square::SwitchingMemo()
{
    if(this->GetQuestion()||this->GetMemo()) return *this;

    this->m_memo.push_back(Number());
    this->m_answer.GetKind() = Number::KIND::NONE;

    return *this;
}
