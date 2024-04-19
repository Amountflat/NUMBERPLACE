#include <numberplace/Cursor.hpp>

numberplace::Cursor::INFORMATION& operator&=(numberplace::Cursor::INFORMATION& i1, const numberplace::Cursor::INFORMATION i2)
{
    return i1 = static_cast<numberplace::Cursor::INFORMATION>(static_cast<unsigned int>(i1)&static_cast<unsigned int>(i2));
}

numberplace::Cursor::INFORMATION& operator|=(numberplace::Cursor::INFORMATION& i1, const numberplace::Cursor::INFORMATION i2)
{
    return i1 = static_cast<numberplace::Cursor::INFORMATION>(static_cast<unsigned int>(i1)|static_cast<unsigned int>(i2));
}
