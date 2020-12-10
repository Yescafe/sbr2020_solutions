#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        while (n--) {
            string line;
            cin >> line;
            auto fnd = find(begin(line), end(line), '-');
            if (fnd != end(line)) {    // 有分割线，全体清除
                for (auto ch : line) {
                    if (ch != '-') cout << ch;
                }
            } else {                   // 无分割线，插入分割线
                cout << line.front();  // 输出首字符
                for (int i = 1; i < line.size(); ++i) {
                    // 后面每个字符在其前面输出-
                    cout << '-' << line[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
