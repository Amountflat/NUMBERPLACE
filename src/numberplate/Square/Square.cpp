#include <numberplate/Square.hpp>

using namespace numberplate;

Square::Square(const Square& c):
m_correct(c.m_correct),
m_answer(c.m_answer)
{
}

Square::Square(Square&& r):
m_correct(std::move(r.m_correct)),
m_answer(std::move(r.m_answer))
{
}
