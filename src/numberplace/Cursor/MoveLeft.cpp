#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::MoveLeft()
{
    switch(this->GetInfoRow())
    {
        case INFORMATION::ROW_0:
            return this->SetRow(INFORMATION::ROW_8);
        case INFORMATION::ROW_1:
            return this->SetRow(INFORMATION::ROW_0);
        case INFORMATION::ROW_2:
            return this->SetRow(INFORMATION::ROW_1);
        case INFORMATION::ROW_3:
            return this->SetRow(INFORMATION::ROW_2);
        case INFORMATION::ROW_4:
            return this->SetRow(INFORMATION::ROW_3);
        case INFORMATION::ROW_5:
            return this->SetRow(INFORMATION::ROW_4);
        case INFORMATION::ROW_6:
            return this->SetRow(INFORMATION::ROW_5);
        case INFORMATION::ROW_7:
            return this->SetRow(INFORMATION::ROW_6);
        case INFORMATION::ROW_8:
            return this->SetRow(INFORMATION::ROW_7);
    }

    return *this;
}
