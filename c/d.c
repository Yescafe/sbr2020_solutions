#include <stdio.h>

int main(void)
{
    int n, c;
    while (~scanf("%d %d", &n, &c)) {
        if (n == 0 || c == 0) break;
        int sum = 0;
        while (n--) {
            int m = 1010;
            for (int i = 0; i < c; ++i) {
                int a;
                scanf("%d", &a);
                m = m < a ? m : a;
            }
            sum += m;
        }
        printf("%d\n", sum);
    }
    return 0;
}
