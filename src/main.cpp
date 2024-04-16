#include <iostream>
#include <vector>
#include <numberplate/Cursor.hpp>

using namespace numberplate;

int main()
{
    Cursor cursor;
    std::vector<Cursor::INFORMATION> Row, Column, Valid;

    Row.push_back(Cursor::INFORMATION::ROW_0);
    Row.push_back(Cursor::INFORMATION::ROW_1);
    Row.push_back(Cursor::INFORMATION::ROW_2);
    Row.push_back(Cursor::INFORMATION::ROW_3);
    Row.push_back(Cursor::INFORMATION::ROW_4);
    Row.push_back(Cursor::INFORMATION::ROW_5);
    Row.push_back(Cursor::INFORMATION::ROW_6);
    Row.push_back(Cursor::INFORMATION::ROW_7);
    Row.push_back(Cursor::INFORMATION::ROW_8);

    Column.push_back(Cursor::INFORMATION::COLUMN_0);
    Column.push_back(Cursor::INFORMATION::COLUMN_1);
    Column.push_back(Cursor::INFORMATION::COLUMN_2);
    Column.push_back(Cursor::INFORMATION::COLUMN_3);
    Column.push_back(Cursor::INFORMATION::COLUMN_4);
    Column.push_back(Cursor::INFORMATION::COLUMN_5);
    Column.push_back(Cursor::INFORMATION::COLUMN_6);
    Column.push_back(Cursor::INFORMATION::COLUMN_7);
    Column.push_back(Cursor::INFORMATION::COLUMN_8);

    Valid.push_back(Cursor::INFORMATION::VALID_TRUE);
    Valid.push_back(Cursor::INFORMATION::VALID_FALSE);

    for(auto v : Valid) for(auto c : Column) for(auto r : Row)
    {
        cursor.Set(static_cast<Cursor::INFORMATION>(static_cast<unsigned short>(r)|static_cast<unsigned short>(c)|static_cast<unsigned short>(v)));
        printf(
            "r(%d), c(%d), v(%s)\n",
            static_cast<unsigned short>(cursor.GetInfo())&static_cast<unsigned short>(Cursor::INFORMATION::ROW),
            (static_cast<unsigned short>(cursor.GetInfo())&static_cast<unsigned short>(Cursor::INFORMATION::COLUMN))>>4,
            static_cast<Cursor::INFORMATION>(static_cast<unsigned short>(cursor.GetInfo())&static_cast<unsigned short>(Cursor::INFORMATION::VALID))==Cursor::INFORMATION::VALID_TRUE?"true":"false"
        );
    }

    printf("\n");
    for(auto v : Valid)
    {
        cursor.SetValid(v);
        for(auto c : Column)
        {
            cursor.SetColumn(c);
            for(auto r : Row)
            {
                cursor.SetRow(r);
                printf(
                    "r(%d), c(%d), v(%s)\n",
                    cursor.GetInfoRow(),
                    static_cast<unsigned short>(cursor.GetInfoColumn())>>4,
                    cursor.GetInfoValid()==Cursor::INFORMATION::VALID_TRUE?"true":"false"
                );
            }
        }
    }

    return 0;
}
