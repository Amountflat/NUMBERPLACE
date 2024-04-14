#include <algorithm>
#include <numberplate/Identifier.hpp>

using namespace numberplate;

void ManagerIdentifier::Erase(Identifier& r)
{
    auto id = this->m_identifiers.begin();

    for(; id < this->m_identifiers.end() && (*id).get() != r ; id++);

    if(id == this->m_identifiers.end()) return;

    (*id).get().mp_mi = nullptr;
    (*id).get().m_id = 0;
    this->m_identifiers.erase(id);
}
