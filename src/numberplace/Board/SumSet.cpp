#include <numberplace/Board.hpp>

using namespace numberplace;

Board::Squares Board::SumSet(Squares s1, Squares s2)
{
    Squares s;

    for(auto &a : s1) s.push_back(a);
    for(auto &a : s2) s.push_back(a);

    return s;
}
