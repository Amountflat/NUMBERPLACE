#include <iostream>
#include <vector>
#include <numberplace/Keyboard.hpp>
#include <numberplace/Board.hpp>

using namespace numberplace;

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

            case Keyboard::KEY::DELETE:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).GetAnswer().GetKind() = Number::KIND::NONE;
                break;

            case Keyboard::KEY::NUMBER_1:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_1);
                break;
            case Keyboard::KEY::NUMBER_2:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_2);
                break;
            case Keyboard::KEY::NUMBER_3:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_3);
                break;
            case Keyboard::KEY::NUMBER_4:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_4);
                break;
            case Keyboard::KEY::NUMBER_5:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_5);
                break;
            case Keyboard::KEY::NUMBER_6:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_6);
                break;
            case Keyboard::KEY::NUMBER_7:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_7);
                break;
            case Keyboard::KEY::NUMBER_8:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_8);
                break;
            case Keyboard::KEY::NUMBER_9:
                board.Get(cursor.GetInfoRow(), cursor.GetInfoColumn()).SetNumber(Number::KIND::N_9);
                break;
        }
        printf("\n");
    }

    return 0;
}
