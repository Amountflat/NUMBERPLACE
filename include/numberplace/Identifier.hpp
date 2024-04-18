#pragma once

#include <string>
#include <vector>

namespace numberplace
{
    class Identifier;
    class ManagerIdentifier;

    class Identifier
    {
        private:
            typedef unsigned int id;

        private:
            id                 m_id;
            ManagerIdentifier* mp_mi;

        public:
            Identifier ();
            Identifier (const Identifier&) = delete;
            Identifier (Identifier&&)      = delete;
            ~Identifier();

        public:
            bool operator==(const Identifier& cr_identifier) const;

        public:
            bool operator!=(const Identifier& cr_identifier) const {return !this->operator==(cr_identifier);}

        friend ManagerIdentifier;
    };

    class ManagerIdentifier
    {
        private:
            std::vector<std::reference_wrapper<Identifier>> m_identifiers;
            Identifier::id           m_assigned_id;

        public:
            ManagerIdentifier ();
            ManagerIdentifier (const ManagerIdentifier&) = delete;
            ManagerIdentifier (ManagerIdentifier&&)      = delete;
            ~ManagerIdentifier()                         = default;

        public:
            void        Erase(Identifier& r_identifier);
            Identifier& GetID(Identifier& r_identifier);

        friend Identifier;
    };
}
