#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b) {
        if (a < b) swap(a, b);
        if (a % 1000 == 0 && b % 618 == 0)
            cout << "T" << endl;
        else
            cout << "F" << endl;
    }
    return 0;
}
