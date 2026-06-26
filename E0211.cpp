#include <iostream>
#include <iomanip> // 必須引入此標頭檔來控制小數點

using namespace std;

int main() {
    double c; // 攝氏溫度

    // ITSA 標準寫法：支援多筆測資
    // 注意：C++ 的 cin 會自動偵測 c 是 double，你不用再背 %lf 了！
    while (cin >> c) {
        
        // 計算華氏溫度 (數學邏輯與 C 語言完全相同)
        double f = c * (9.0 / 5.0) + 32.0;

        // 輸出結果：fixed 固定格式，setprecision(1) 保留一位小數
        cout << fixed << setprecision(1) << f << "\n";
    }
    return 0;
}