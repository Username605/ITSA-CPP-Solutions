#include <iostream>

using namespace std;

int main() {
    int n; // 測試資料筆數

    // 1. 先讀取第一行的 n
    if (cin >> n) {
        
        // 2. 跑 n 次迴圈 (這裡套用上一題教你的 while(n--) 密技！)
        while (n--) {
            int i;
            cin >> i; // 讀取次方數 i
            
            // 3. 檢查：如果 i > 31 要印出特定文字
            if (i > 31) {
                cout << "Value of more than 31\n";
            } else {
                // 4. 使用位移運算計算 2 的 i 次方並印出
                // cout 會自動偵測型別，直接丟給它就好！
                cout << (1u << i) << "\n"; 
            }
        }
    }
    return 0;
}