#include <numberplace/Board.hpp>

using namespace numberplace;

Board::Squares Board::ProductSet(Squares squares1, Squares squares2)
{
    Squares squares;
    for(auto& s1 : squares1) for(auto& s2 : squares2) if(s1.get().GetID() == s2.get().GetID()) squares.push_back(std::ref(s1));
    return squares;
}
