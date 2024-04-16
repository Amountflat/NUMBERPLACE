#include <numberplate/Cursor.hpp>

using namespace numberplate;

Cursor& Cursor::Set(INFORMATION info)
{
    this->m_info = info;

    return *this;
}
