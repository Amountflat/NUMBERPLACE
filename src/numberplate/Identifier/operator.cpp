#include <numberplate/Identifier.hpp>

using namespace numberplate;

bool Identifier::operator==(const Identifier& c) const
{
    return (this->m_id==c.m_id)&&(this->mp_mi==c.mp_mi);
}
