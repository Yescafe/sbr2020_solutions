#include <iostream>
using namespace std;

int main()
{
    int n, c;
    while (cin >> n >> c) {
        if (n == 0 || c == 0) break;
        int sum = 0;
        while (n--) {
            int m = 1010;
            for (int i = 0; i < c; ++i) {
                int a;
                cin >> a;
                m = m < a ? m : a;
            }
            sum += m;
        }
        cout << sum << endl;
    }
    return 0;
}
