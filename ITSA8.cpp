#include <iostream>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    // ITSA 標準寫法：支援多筆測資連續輸入
    while (cin >> n) {
        
        // 預設該數字為質數
        bool is_prime = true;

        // 1 既不是質數也不是合數，要特別擋掉
        if (n <= 1) {
            is_prime = false;
        } else {
            // 💡 效能關鍵：只要檢查到 i * i <= n 即可
            for (int i = 2; i * i <= n; i++) {
                // 如果能被整除，代表它不是質數
                if (n % i == 0) {
                    is_prime = false;
                    break; // 已經確定不是質數了，立刻跳出迴圈
                }
            }
        }

        // 根據布林值 (bool) 來決定輸出 YES 或 NO
        if (is_prime) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}