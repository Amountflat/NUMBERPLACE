#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor::INFORMATION Cursor::GetInfoValid() const
{
    return this->m_info&INFORMATION::VALID;
}
