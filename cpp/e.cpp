#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        while (n--) {
            string str;
            cin >> str;
            if (str.size() == 1) {
                cout << str << endl;
                continue;
            }
            int i = 0;
            int max_len = 0;
            int p1 = -1, p2 = -1;
            while (i != str.size()) {
                int j = i + 1;
                while (j != str.size()) {
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
                cout << str << endl;
            } else {
                for (int i = 0; i < str.size(); ++i) {
                    if ((i >= p1 && i < p1 + max_len) || (i >= p2 && i < p2 + max_len))
                        continue;
                    else
                        cout << str[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}
