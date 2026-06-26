#include <iostream>

using namespace std;

int main() {
    int n; // 測試資料的筆數

    // 1. 先讀取第一行的 n
    if (cin >> n) {
        
        // 2. 依照 n 的次數跑迴圈
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m; // 讀取原本的數字
            
            // 3. 計算並輸出 (格式：原數字 平方值 立方值)
            // 中間用 " " (空白字串) 隔開，最後加上 "\n" 換行
            cout << m << " " << m * m << " " << m * m * m << "\n";
        }
    }
    return 0;
}