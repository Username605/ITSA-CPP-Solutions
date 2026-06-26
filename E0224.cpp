#include <iostream>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    if (cin >> n) {
        while (n--) {
            // 因為累加的數字可能很大，這裡建議用 long long 避免整數溢位 (Overflow)
            long long x, y; 
            cin >> x >> y;
            
            if (x > y) {
                swap(x, y);
            }
            
            // 梯形面積公式：(首項 + 末項) * 項數 / 2
            // 首項 = x, 末項 = y, 項數 = (y - x + 1)
            long long sum = (x + y) * (y - x + 1) / 2;
            
            cout << sum << "\n";
        }
    }
    return 0;
}