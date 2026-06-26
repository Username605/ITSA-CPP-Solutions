#include <iostream>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    // 讀取輸入
    if (cin >> n) {
        // 在 C++ 中，判斷狀態強烈建議使用 bool (true/false) 而不是 int (1/0)
        bool is_prime = true;

        if (n <= 1) {
            // 修正 Bug 1: 這裡只要改變狀態就好，不要急著印出來
            is_prime = false;
        } else {
            // 修正 Bug 2: 條件必須是 i * i <= n (加上等號，防禦完全平方數如 4, 9, 25)
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }

        // 統一在最後根據 is_prime 的狀態來輸出結果，並加上換行符號 \n
        if (is_prime) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}