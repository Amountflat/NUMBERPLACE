#pragma once

#include <numberplate/Number.hpp>
#include <numberplate/Identifier.hpp>

namespace numberplate
{
    class Square
    {
        private:
            Number              m_correct;
            Number              m_answer;
            Identifier          m_id;

        public:
            Square ()              = default;
            Square (const Square&);
            Square (Square&&);
            ~Square()              = default;

        public:
            Number&     GetCorrect();
            Number&     GetAnswer();
            Identifier& GetID();
    };
}
