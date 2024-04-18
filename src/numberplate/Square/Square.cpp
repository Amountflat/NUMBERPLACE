#include <numberplate/Square.hpp>

using namespace numberplate;

Square::Square(const Square& c):
m_correct(c.m_correct),
m_answer(c.m_answer),
m_question(c.m_question)
{
}

Square::Square(Square&& r):
m_correct(std::move(r.m_correct)),
m_answer(std::move(r.m_answer)),
m_question(std::move(r.m_question))
{
}
