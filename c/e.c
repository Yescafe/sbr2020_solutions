#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();         // newline eater
    while (n--) {
        char l[200];
        // ap: 目标串 1 的起始位置
        // ap2: 目标串 2 的起始位置
        // al: 目标串的长度
        int ap, al, ap2;
        ap = al = ap2 =  0;
        fgets(l, 200, stdin);
        size_t len = strlen(l);
        while (l[len - 1] == '\n') {
            l[len - 1] = '\0';
            --len;
        }
        for (int st = 0; st < len; ++st) {
            int cl = 0;
            for (int ed = st + 1; ed < len && st + cl < ed; ) {
                if (l[st + cl] == l[ed + cl]) {
                    ++cl;
                    if (cl > al) {
                        al = cl;
                        ap = st;
                        ap2 = ed;
                    }
                } else {
                    cl = 0;
                    ++ed;
                }
            }
        }
        if (al != 0) {
            for (int i = 0; i < len; ++i) {
                if ((i >= ap && i < ap + al) || (i >= ap2 && i < ap2 + al));
                else putchar(l[i]);
            }
            putchar('\n');
        } else {
            puts(l);
        }
    }
    return 0;
}
