#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor::INFORMATION Cursor::GetInfoValid() const
{
    return static_cast<INFORMATION>(static_cast<unsigned short>(this->m_info)&static_cast<unsigned short>(INFORMATION::VALID));
}
