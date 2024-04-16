#include <iostream>
#include <vector>
#include <numberplate/Board.hpp>

using namespace numberplate;

int main()
{
    Board board;

    DisplayBoard       (board);
    DisplayBoard       (board, true);
    DisplayCorrectBoard(board);

    return 0;
}
