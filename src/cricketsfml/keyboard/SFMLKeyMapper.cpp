#include <cricketsfml/keyboard/SFMLKeyMapper.h>

namespace keyboard {

const Key SFMLKeyMapper::getKey(sf::Keyboard::Key key) const {
    #define START_MAPPING() switch (key) {
    #define END_MAPPING() default: return CR_KEY_UNKNOWN; }
    #define MAP(a, b) case sf::Keyboard::a: return CR_KEY_##b;

    START_MAPPING()
    // Letters
    MAP(A, A);
    MAP(B, B);
    MAP(C, C);
    MAP(D, D);
    MAP(E, E);
    MAP(F, F);
    MAP(G, G);
    MAP(H, H);
    MAP(I, I);
    MAP(J, J);
    MAP(K, K);
    MAP(L, L);
    MAP(M, M);
    MAP(N, N);
    MAP(O, O);
    MAP(P, P);
    MAP(Q, Q);
    MAP(R, R);
    MAP(S, S);
    MAP(T, T);
    MAP(U, U);
    MAP(V, V);
    MAP(W, W);
    MAP(Y, Y);
    MAP(Z, Z);

    // Arrows
    MAP(Left, LEFT);
    MAP(Right, RIGHT);
    MAP(Up, UP);
    MAP(Down, DOWN);
    MAP(Escape, ESC);

    // Numbers
    MAP(Num0, 0);
    MAP(Num1, 1);
    MAP(Num2, 2);
    MAP(Num3, 3);
    MAP(Num4, 4);
    MAP(Num5, 5);
    MAP(Num6, 6);
    MAP(Num7, 7);
    MAP(Num8, 8);
    MAP(Num9, 9);

    // Special
    MAP(LControl, LCTRL);
    MAP(RControl, RCTRL);
    MAP(LShift, LSHIFT);
    MAP(RShift, RSHIFT);
    MAP(PageUp, PGUP);
    MAP(PageDown, PGDOWN);

    END_MAPPING()
}

}
