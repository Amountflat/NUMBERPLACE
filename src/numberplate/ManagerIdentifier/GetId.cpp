#include <numberplate/Identifier.hpp>

using namespace numberplate;

Identifier& ManagerIdentifier::GetID(Identifier& r)
{
    auto check = [this]()
    {
        for(auto id : this->m_identifiers)
        {
            if(id.get().m_id == this->m_assigned_id) return true;
        }

        return false;
    };

    if(this==r.mp_mi) return r;

    while(check()) this->m_assigned_id++;

    if(r.mp_mi != nullptr) r.mp_mi->Erase(r);

    r.mp_mi = this;
    r.m_id = this->m_assigned_id;
    this->m_identifiers.push_back(r);

    return r;
}
