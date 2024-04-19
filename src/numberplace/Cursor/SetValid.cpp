#include <numberplace/Cursor.hpp>

using namespace numberplace;

Cursor& Cursor::SetValid(INFORMATION info)
{
    return this->Set(this->GetInfoRow()|this->GetInfoColumn()|(info&INFORMATION::VALID));
}
