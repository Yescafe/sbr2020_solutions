#include <stdio.h>

int main(void)
{
    int n;
    while (~scanf("%d", &n)) {
        if (n == 0) break;
        int a, b;
        a = b = 0;
        while (n--) {
            int ai, bi;
            scanf("%d %d", &ai, &bi);
            a += ai;
            b += bi;
        }
        if (a >= b) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}
