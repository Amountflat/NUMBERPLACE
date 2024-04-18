#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::SetColumn(INFORMATION info)
{
    this->Set(static_cast<INFORMATION>(
        static_cast<unsigned short>(this->GetInfoRow())
        |
        static_cast<unsigned short>(info)&static_cast<unsigned short>(INFORMATION::COLUMN)
        |
        static_cast<unsigned short>(this->GetInfoValid())
    ));

    return *this;
}
