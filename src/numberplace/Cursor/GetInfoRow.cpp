#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor::INFORMATION Cursor::GetInfoRow() const
{
    return this->m_info&INFORMATION::ROW;
}
