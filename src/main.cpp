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

    while(true)
    {
        std::system("cls");
        DisplayBoard(board, true, cursor);
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
