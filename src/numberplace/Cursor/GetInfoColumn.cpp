#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor::INFORMATION Cursor::GetInfoColumn() const
{
    return this->m_info&INFORMATION::COLUMN;
}
