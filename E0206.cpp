#include <iostream>

using namespace std;

int main() {
    int n; // 測試資料的筆數

    // 1. 讀取第一行的 n
    if (cin >> n) {
        
        // 2. 依照 n 的次數跑迴圈
        for (int i = 0; i < n; i++) {
            int x, y;
            
            // 讀取每一行的兩個整數
            cin >> x >> y;
            
            // 3. 計算 (x + y) 的平方並直接印出
            // 在 C++ 中，我們可以直接把算式寫在 cout 的串聯中！
            cout << (x + y) * (x + y) << "\n";
        }
    }
    return 0;
}