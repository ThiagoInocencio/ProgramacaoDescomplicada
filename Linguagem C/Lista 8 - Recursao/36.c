// 36º Exercício da lista de recursão

#include <stdio.h>

int mdc(int x, int y) {

    if(y == 0) return x;
        return mdc(y, x%y);
}

int main() {

    printf("o mdc entr 434 e 35 eh: %d", mdc(434, 35));

    return 0;
}
