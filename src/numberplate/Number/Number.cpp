#include <numberplate/Number.hpp>

using namespace numberplate;

Number::Number():
m_kind(KIND::NONE)
{}

Number::Number(KIND k):
m_kind(k)
{}
