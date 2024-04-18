#pragma

namespace numberplate
{
    class Keyboard
    {
        public:
            enum class KEY
            {
                CTRL_C,

                ARROW_UP,
                ARROW_DOWN,
                ARROW_RIGHT,
                ARROW_LEFT,

                SMALL_A,
                SMALL_B,
                SMALL_C,
                SMALL_D,
                SMALL_E,
                SMALL_F,
                SMALL_G,
                SMALL_H,
                SMALL_I,
                SMALL_J,
                SMALL_K,
                SMALL_L,
                SMALL_M,
                SMALL_N,
                SMALL_O,
                SMALL_P,
                SMALL_Q,
                SMALL_R,
                SMALL_S,
                SMALL_T,
                SMALL_U,
                SMALL_V,
                SMALL_W,
                SMALL_X,
                SMALL_Y,
                SMALL_Z,

                LARGE_A,
                LARGE_B,
                LARGE_C,
                LARGE_D,
                LARGE_E,
                LARGE_F,
                LARGE_G,
                LARGE_H,
                LARGE_I,
                LARGE_J,
                LARGE_K,
                LARGE_L,
                LARGE_M,
                LARGE_N,
                LARGE_O,
                LARGE_P,
                LARGE_Q,
                LARGE_R,
                LARGE_S,
                LARGE_T,
                LARGE_U,
                LARGE_V,
                LARGE_W,
                LARGE_X,
                LARGE_Y,
                LARGE_Z,

                SIZE,
            };

        public:
            Keyboard ()                = default;
            Keyboard (const Keyboard&) = default;
            Keyboard (Keyboard&&)      = default;
            ~Keyboard()                = default;

        public:
            static KEY Get();
    };
}
