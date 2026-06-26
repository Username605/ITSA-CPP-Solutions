#include <iostream>

using namespace std;

// 1. C++ 專屬升級：使用 bool (布林值) 來回傳 true 或 false
bool isPrime(int num) {
    if (num <= 1) return false; // 0 和 1 不是質數
    
    // 檢查從 2 到 num 的平方根 (你的高效寫法完全保留)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // 能被整除，回傳 false
        }
    }
    return true; // 都沒被整除，回傳 true 代表它是質數
}

int main() {
    // (選擇性加上的加速咒語) 讓 cin/cout 跑得跟 scanf/printf 一樣快
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    // 2. ITSA 標準寫法：使用 while(cin) 處理多筆測資
    while (cin >> n) {
        
        // 從 n-1 開始往下找，尋找「小於此數」的最大質數
        for (int i = n - 1; i >= 2; i--) {
            // 直接把回傳 true/false 的函式放進 if 判斷
            if (isPrime(i)) {
                cout << i << "\n"; // 找到就印出來
                break;             // 並且立刻結束內層迴圈
            }
        }
    }
    return 0;
}