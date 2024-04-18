#include <iostream>
#include <vector>
#include <numberplate/Keyboard.hpp>
#include <numberplate/Board.hpp>

using namespace numberplate;

int main()
{
    Cursor cursor;
    Board board;
    Keyboard keyboard;

    cursor.SetValid(Cursor::INFORMATION::VALID_TRUE);

    board.Get(1, 0).SwitchingQuestion();
    board.Get(4, 0).SwitchingQuestion();
    board.Get(6, 0).SwitchingQuestion();
    board.Get(8, 0).SwitchingQuestion();

    board.Get(1, 1).SwitchingQuestion();
    board.Get(2, 1).SwitchingQuestion();
    board.Get(3, 1).SwitchingQuestion();

    board.Get(0, 2).SwitchingQuestion();
    board.Get(3, 2).SwitchingQuestion();

    board.Get(0, 3).SwitchingQuestion();
    board.Get(5, 3).SwitchingQuestion();

    board.Get(0, 3).SwitchingQuestion();

    while(true)
    {
        std::system("cls");
        DisplayBoard(board, false, cursor);
        printf("\ninput:");
        switch(keyboard.Get())
        {
            case Keyboard::KEY::CTRL_C:
                exit(0);

            case Keyboard::KEY::ARROW_UP:
                cursor.MoveUp();
                break;

            case Keyboard::KEY::ARROW_DOWN:
                cursor.MoveDown();
                break;

            case Keyboard::KEY::ARROW_LEFT:
                cursor.MoveLeft();
                break;

            case Keyboard::KEY::ARROW_RIGHT:
                cursor.MoveRight();
                break;
        }
        printf("\n");
    }

    return 0;
}
