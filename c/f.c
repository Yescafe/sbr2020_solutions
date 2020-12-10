#include <stdio.h>

static int absi(int n) {
    return n < 0 ? -n : n;
}

int main(void)
{
    int a, b;
    char op;
    while (~scanf("%d%c%d", &a, &op, &b)) {
        int res;
        switch (op) {
          case '+': res = absi(a + b); break;
          case '-': res = absi(a - b); break;
        }
        printf("%d\n", res);
    }
    return 0;
}
