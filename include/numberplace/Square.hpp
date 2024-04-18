#pragma once

#include <numberplace/Number.hpp>
#include <numberplace/Identifier.hpp>

namespace numberplace
{
    class Square
    {
        private:
            bool                m_question;
            Number              m_correct;
            Number              m_answer;
            Identifier          m_id;

        public:
            Square ()              = default;
            Square (const Square&);
            Square (Square&&);
            ~Square()              = default;

        public:
            Number&     GetCorrect       ();
            Number&     GetAnswer        ();
            Identifier& GetID            ();
            Square&     SwitchingQuestion();
            Square&     SwitchingAnswer  ();

        public:
            Number GetDisplay();
    };
}
