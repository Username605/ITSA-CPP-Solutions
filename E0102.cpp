#include <iostream>
#include <string>

using namespace std;

int main() {
    string num; // 使用動態長度的 string，連預留空間都不用猜了

    // C++ 的 cin >> num 成功讀取時會回傳 true，讀到 EOF (檔案結束) 時會自動變成 false
    while (cin >> num) {
        
        // 固定跑 4 次，印出前 4 個字元
        for (int i = 0; i < 4; i++) {
            cout << num[i] << "\n"; 
        }
    }
    return 0;
}