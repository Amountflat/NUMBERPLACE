#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::SetRow(INFORMATION info)
{
    return this->Set((info&INFORMATION::ROW)|this->GetInfoColumn()|this->GetInfoValid());
}
