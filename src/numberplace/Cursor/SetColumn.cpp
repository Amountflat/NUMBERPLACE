#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::SetColumn(INFORMATION info)
{
    return this->Set(this->GetInfoRow()|(info&INFORMATION::COLUMN)|this->GetInfoValid());
}
