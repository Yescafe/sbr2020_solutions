#include <stdio.h>

int main(void)
{
    int a, b;
    while (~scanf("%d %d", &a, &b)) {
        if (a < b) {
            int t = a;
            a = b;
            b = t;
        }
        if (a % 1000 == 0 && b % 618 == 0)
            printf("T\n");
        else
            printf("F\n");
    }
    return 0;
}
