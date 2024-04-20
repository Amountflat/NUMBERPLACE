#include <numberplace/Board.hpp>

using namespace numberplace;

Board::Squares Board::ProductRowAndColumn(SmallRow sr, SmallColumn sc)
{
    return Board::ProductSet(
        Board::SumSet(Board::SumSet(sr[0], sr[1]), sr[2]),
        Board::SumSet(Board::SumSet(sc[0], sc[1]), sc[2])
    );
}
