#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::SetRow(INFORMATION info)
{
    this->Set(static_cast<INFORMATION>(
        static_cast<unsigned short>(info)&static_cast<unsigned short>(INFORMATION::ROW)
        |
        static_cast<unsigned short>(this->GetInfoColumn())
        |
        static_cast<unsigned short>(this->GetInfoValid())
    ));

    return *this;
}
