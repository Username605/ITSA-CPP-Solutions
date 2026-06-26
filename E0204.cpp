#include <iostream>

using namespace std;

int main() {
    int n; // 用來存總共有幾組資料
    
    // 1. 讀取第一行的數字 n，cin 成功讀取時會回傳 true
    if (cin >> n) {
        
        // 2. 跑 n 次迴圈
        for (int i = 0; i < n; i++) {
            int a, b;
            
            // 3. 讀取每一行的兩個整數，直接用 >> 串聯
            cin >> a >> b;
            
            // 4. 計算總和並印出 (加上 "\n" 換行)
            cout << a + b << "\n";
        }
    }
    
    return 0;
}