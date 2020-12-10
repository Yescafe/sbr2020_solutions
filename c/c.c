#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    while (~scanf("%d", &n)) {
        if (n == 0) break;
        while (n--) {
            char line[100];
            scanf("%s", line);
            const int len = strlen(line);
            int fnd = 0;
            while (fnd != len) {
                if (line[fnd] == '-')
                    break;
                ++fnd;
            }
            if (fnd != len) {    // 有分割线，全体清除
                for (int i = 0; i < len; ++i) {
                    if (line[i] != '-') putchar(line[i]);
                }
            } else {                   // 无分割线，插入分割线
                putchar(line[0]);      // 输出首字符
                for (int i = 1; i < len; ++i) {
                    // 后面每个字符在其前面输出-
                    putchar('-');
                    putchar(line[i]);
                }
            }
            putchar('\n');
        }
    }
    return 0;
}
