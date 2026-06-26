#include <iostream>
#include <iomanip> // 控制小數點位數
#include <cmath>   // 為了使用 round() 函式

using namespace std;

int main() {
    int w, h;

    // ITSA 標準寫法：使用 while(cin) 讀取直到 EOF
    // 一次讀入兩個整數：體重 w, 身高 h
    while (cin >> w >> h) {
        
        // 1. 單位換算：把公分 (cm) 轉成 公尺 (m)
        // 保持 100.0 讓它產生浮點數結果
        double h_meter = h / 100.0;

        // 2. 計算 BMI
        double bmi = w / (h_meter * h_meter);

        // 3. 現代 C++ 四捨五入到小數點第二位
        // 呼叫 round() 幫我們把 bmi * 100.0 的結果四捨五入成最接近的整數，再除以 100.0 還原
        bmi = round(bmi * 100.0) / 100.0;

        // 4. 輸出結果，保留兩位小數
        // fixed 固定格式，setprecision(2) 設定保留兩位小數
        cout << fixed << setprecision(2) << bmi << "\n";
    }
    return 0;
}