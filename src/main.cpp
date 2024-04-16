#include <iostream>
#include <vector>
#include <numberplate/Board.hpp>

using namespace numberplate;

int main()
{
    Board board;

    for(unsigned int x1 = 0 ; x1 < 9 ; x1++) for(unsigned int y1 = 0 ; y1 < 9 ; y1++) for(unsigned int x2 = 0 ; x2 < 9 ; x2++) for(unsigned int y2 = 0 ; y2 < 9 ; y2++)
    {
        if(
            (x1==x2&&y1==y2)&&board.Get(x1, y1).GetID()!=board.Get(x2, y2).GetID()
            ||
            (x1!=x2||y1!=y2)&&board.Get(x1, y1).GetID()==board.Get(x2, y2).GetID()
        )
        {
            printf("[%d][%d] <-> [%d][%d]\n", y1, x1, y2, x2);
        }
    }
    for(unsigned int y = 0 ; y < 9 ; y++)
    {
        for(unsigned int x = 0 ; x < 9 ; x++)
        {
            printf("%2d ", board.Get(x, y).GetCorrect().GetKind());
        }
        printf("\n");
    }

    printf("\n");

    board.Shuffle();

    for(unsigned int x1 = 0 ; x1 < 9 ; x1++) for(unsigned int y1 = 0 ; y1 < 9 ; y1++) for(unsigned int x2 = 0 ; x2 < 9 ; x2++) for(unsigned int y2 = 0 ; y2 < 9 ; y2++)
    {
        if(
            (x1==x2&&y1==y2)&&board.Get(x1, y1).GetID()!=board.Get(x2, y2).GetID()
            ||
            (x1!=x2||y1!=y2)&&board.Get(x1, y1).GetID()==board.Get(x2, y2).GetID()
        )
        {
            printf("[%d][%d] <-> [%d][%d]\n", y1, x1, y2, x2);
        }
    }
    for(unsigned int y = 0 ; y < 9 ; y++)
    {
        for(unsigned int x = 0 ; x < 9 ; x++)
        {
            printf("%2d ", board.Get(x, y).GetCorrect().GetKind());
        }
        printf("\n");
    }

    printf("\n");
    board.Shuffle();

    for(unsigned int x1 = 0 ; x1 < 9 ; x1++) for(unsigned int y1 = 0 ; y1 < 9 ; y1++) for(unsigned int x2 = 0 ; x2 < 9 ; x2++) for(unsigned int y2 = 0 ; y2 < 9 ; y2++)
    {
        if(
            (x1==x2&&y1==y2)&&board.Get(x1, y1).GetID()!=board.Get(x2, y2).GetID()
            ||
            (x1!=x2||y1!=y2)&&board.Get(x1, y1).GetID()==board.Get(x2, y2).GetID()
        )
        {
            printf("[%d][%d] <-> [%d][%d]\n", y1, x1, y2, x2);
        }
    }
    for(unsigned int y = 0 ; y < 9 ; y++)
    {
        for(unsigned int x = 0 ; x < 9 ; x++)
        {
            printf("%2d ", board.Get(x, y).GetCorrect().GetKind());
        }
        printf("\n");
    }

    return 0;
}
