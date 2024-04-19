#include <numberplace/Number.hpp>

using namespace numberplace;

Number& Number::operator=(const Number& c)
{
    this->m_kind = c.m_kind;

    return *this;
}
