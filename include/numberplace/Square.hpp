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
            std::vector<Number> m_memo;
            Identifier          m_id;

        public:
            Square ()              = default;
            Square (const Square&);
            Square (Square&&);
            ~Square()              = default;

        public:
            bool                 GetQuestion      ();
            bool                 GetMemo          ();
            Number&              GetCorrect       ();
            Number&              GetAnswer        ();
            std::vector<Number>& GetMemoNumbers   ();
            Identifier&          GetID            ();
            Square&              SwitchingQuestion();
            Square&              SwitchingAnswer  ();
            Square&              SwitchingMemo  ();
            Square&              SetNumber        (Number::KIND);

        public:
            Number GetDisplay();
    };
}
