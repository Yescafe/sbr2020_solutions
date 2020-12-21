#include <iostream>
using namespace std;

static int absi(int n) {
    return n < 0 ? -n : n;
}

int main()
{
    int s, b;
    char op;
    cin >> s;
    while (cin >> op >> b) {
        switch (op) {
          case '+': s += b; break;
          case '-': s -= b; break;
        }
    }
    cout << absi(s) << endl;
    return 0;
}
