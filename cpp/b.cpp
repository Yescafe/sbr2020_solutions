#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int a, b;
        a = b = 0;
        while (n--) {
            int ai, bi;
            cin >> ai >> bi;
            a += ai;
            b += bi;
        }
        if (a >= b) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
    return 0;
}
