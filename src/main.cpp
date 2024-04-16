#include <iostream>
#include <vector>
#include <numberplate/Board.hpp>

using namespace numberplate;

int main()
{
    Cursor cursor;
    Board  board;
    std::vector<Cursor::INFORMATION> row, column, valid;

    row.push_back(Cursor::INFORMATION::ROW_0);
    row.push_back(Cursor::INFORMATION::ROW_2);
    row.push_back(Cursor::INFORMATION::ROW_4);
    row.push_back(Cursor::INFORMATION::ROW_6);
    row.push_back(Cursor::INFORMATION::ROW_8);

    column.push_back(Cursor::INFORMATION::COLUMN_0);
    column.push_back(Cursor::INFORMATION::COLUMN_2);
    column.push_back(Cursor::INFORMATION::COLUMN_4);
    column.push_back(Cursor::INFORMATION::COLUMN_6);
    column.push_back(Cursor::INFORMATION::COLUMN_8);

    valid.push_back(Cursor::INFORMATION::VALID_FALSE);
    valid.push_back(Cursor::INFORMATION::VALID_TRUE);


    for(auto r : row)
    {
        cursor.SetRow(r);
        for(auto c : column)
        {
            cursor.SetColumn(c);
            for(auto v : valid)
            {
                cursor.SetValid(v);
                DisplayBoard(board, true, cursor);
            }
        }
    }

    return 0;
}
