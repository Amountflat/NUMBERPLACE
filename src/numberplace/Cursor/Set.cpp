#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::Set(INFORMATION info)
{
    this->m_info = info;

    return *this;
}
