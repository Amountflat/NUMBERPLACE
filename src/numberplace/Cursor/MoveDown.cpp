#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::MoveDown()
{
    switch(this->GetInfoColumn())
    {
        case INFORMATION::COLUMN_0:
            return this->SetColumn(INFORMATION::COLUMN_1);
        case INFORMATION::COLUMN_1:
            return this->SetColumn(INFORMATION::COLUMN_2);
        case INFORMATION::COLUMN_2:
            return this->SetColumn(INFORMATION::COLUMN_3);
        case INFORMATION::COLUMN_3:
            return this->SetColumn(INFORMATION::COLUMN_4);
        case INFORMATION::COLUMN_4:
            return this->SetColumn(INFORMATION::COLUMN_5);
        case INFORMATION::COLUMN_5:
            return this->SetColumn(INFORMATION::COLUMN_6);
        case INFORMATION::COLUMN_6:
            return this->SetColumn(INFORMATION::COLUMN_7);
        case INFORMATION::COLUMN_7:
            return this->SetColumn(INFORMATION::COLUMN_8);
        case INFORMATION::COLUMN_8:
            return this->SetColumn(INFORMATION::COLUMN_0);
    }

    return *this;
}
