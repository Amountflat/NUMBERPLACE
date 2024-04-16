#include <numberplate/Cursor.hpp>

using namespace numberplate;

Cursor& Cursor::SetValid(INFORMATION info)
{
    this->Set(static_cast<INFORMATION>(
        static_cast<unsigned short>(this->GetInfoRow())
        |
        static_cast<unsigned short>(this->GetInfoColumn())
        |
        static_cast<unsigned short>(info)&static_cast<unsigned short>(INFORMATION::VALID)
    ));

    return *this;
}
