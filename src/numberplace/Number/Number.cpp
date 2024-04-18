#include <numberplace/Number.hpp>

using namespace numberplace;

Number::Number():
m_kind(KIND::NONE)
{}

Number::Number(KIND k):
m_kind(k)
{}
