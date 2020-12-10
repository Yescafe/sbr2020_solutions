#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    while (~scanf("%d", &n)) {
        if (n == 0) break;
        while (n--) {
            char str[110];
            scanf("%s", str);
            const int len = strlen(str);
            if (len == 1) {
                puts(str);
                continue;
            }
            int i = 0;
            int max_len = 0;
            int p1 = -1, p2 = -1;
            while (i != len) {
                int j = i + 1;
                while (j != len) {
                    int len = 0;
                    for (int ii = i, jj = j; str[ii] == str[jj]; ++ii, ++jj) {
                        ++len;
                    }
                    if (len > max_len) {
                        max_len = len;
                        p1 = i;
                        p2 = j;
                    }
                    ++j;
                }
                ++i;
            }
            if (max_len == 0) {
                puts(str);
            } else {
                for (int i = 0; i < len; ++i) {
                    if ((i >= p1 && i < p1 + max_len) || (i >= p2 && i < p2 + max_len))
                        continue;
                    else
                        putchar(str[i]);
                }
                putchar('\n');
            }
        }
    }
    return 0;
}
