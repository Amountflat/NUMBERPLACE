#include <algorithm>
#include <numberplace/Square.hpp>

using namespace numberplace;

Square& Square::SetNumber(Number::KIND nk)
{
    Number number;
    std::vector<Number>::iterator i;

    if(this->GetQuestion())
        return *this;

    if(!this->GetMemo())
    {
        this->GetAnswer().GetKind() = nk;
        return *this;
    }

    number.GetKind() = nk;

    if((i = std::find(this->m_memo.begin(), this->m_memo.end(), number))!=this->m_memo.end())
    {
        this->m_memo.erase(i);
        return *this;
    }

    this->m_memo.push_back(number);

    std::sort(this->m_memo.begin(), this->m_memo.end());

    return *this;
}
