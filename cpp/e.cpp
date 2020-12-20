#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        string l;
        // ap: 目标串 1 的起始位置
        // ap2: 目标串 2 的起始位置
        // al: 目标串的长度
        int ap, al, ap2;
        ap = al = ap2 =  0;
        cin >> l;
        for (int st = 0; st < l.size(); ++st) {
            int cl = 0;
            for (int ed = st + 1; ed < l.size() && st + cl < ed; ) {
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
            for (int i = 0; i < l.size(); ++i) {
                if ((i >= ap && i < ap + al) || (i >= ap2 && i < ap2 + al));
                else cout << l[i];
            }
            endl(cout);
        } else {
            cout << l << endl;
        }
    }
    return 0;
}
