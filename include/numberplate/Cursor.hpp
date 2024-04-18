#pragma once

namespace numberplate
{
    class Cursor
    {
        public:
            enum class INFORMATION : unsigned short
            {
                NONE = 0x0000,

                ROW   = 0x000f,
                ROW_0 = 0x0000,
                ROW_1 = 0x0001,
                ROW_2 = 0x0002,
                ROW_3 = 0x0003,
                ROW_4 = 0x0004,
                ROW_5 = 0x0005,
                ROW_6 = 0x0006,
                ROW_7 = 0x0007,
                ROW_8 = 0x0008,

                COLUMN   = 0x00f0,
                COLUMN_0 = 0x0000,
                COLUMN_1 = 0x0010,
                COLUMN_2 = 0x0020,
                COLUMN_3 = 0x0030,
                COLUMN_4 = 0x0040,
                COLUMN_5 = 0x0050,
                COLUMN_6 = 0x0060,
                COLUMN_7 = 0x0070,
                COLUMN_8 = 0x0080,

                VALID       = 0x0f00,
                VALID_TRUE  = 0x0100,
                VALID_FALSE = 0x0000,
            };

        private:
            INFORMATION m_info;

        public:
            Cursor ();
            Cursor (const Cursor&) = default;
            Cursor (Cursor&&)      = default;
            ~Cursor()              = default;

        public:
            Cursor& Set      (INFORMATION);
            Cursor& SetRow   (INFORMATION);
            Cursor& SetColumn(INFORMATION);
            Cursor& SetValid (INFORMATION);
            Cursor& MoveUp   ();
            Cursor& MoveDown ();
            Cursor& MoveRight();
            Cursor& MoveLeft ();

        public:
            INFORMATION GetInfo      () const;
            INFORMATION GetInfoRow   () const;
            INFORMATION GetInfoColumn() const;
            INFORMATION GetInfoValid () const;
    };
}
