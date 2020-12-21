#include <stdio.h>

static int absi(int n) {
    return n < 0 ? -n : n;
}

int main()
{
    int s, b;
    char op;
    scanf("%d", &s);
    while (~scanf("%c%d", &op, &b)) {
        switch (op) {
          case '+': s += b; break;
          case '-': s -= b; break;
        }
    }
    printf("%d\n", absi(s));
    return 0;
}
