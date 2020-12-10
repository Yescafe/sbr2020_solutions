#include <iostream>
using namespace std;

static int absi(int n) {
    return n < 0 ? -n : n;
}

int main()
{
    int a, b;
    char op;
    while (cin >> a >> op >> b) {
        int res;
        switch (op) {
          case '+': res = absi(a + b); break;
          case '-': res = absi(a - b); break;
        }
        cout << res << endl;
    }
    return 0;
}
