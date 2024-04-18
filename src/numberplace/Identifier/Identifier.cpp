#include <numberplace/Identifier.hpp>

using namespace numberplace;

Identifier::Identifier():
m_id(0),
mp_mi(nullptr)
{}

Identifier::~Identifier()
{
    if(this->mp_mi == nullptr) return;
    for(auto i = this->mp_mi->m_identifiers.begin() ; i < this->mp_mi->m_identifiers.end() ; i++)
    {
        if(this == &((*i).get()))
        {
            this->mp_mi->Erase(*this);
            return;
        }
    }
}
