#include <iostream>
#include <iomanip> // 必須引入此標頭檔來控制小數點

using namespace std;

int main() {
    int top, bottom, height;

    // ITSA 標準寫法：支援多筆測資，一次連續讀入三個整數
    while (cin >> top >> bottom >> height) {
        
        // 計算面積：除以 2.0 讓結果自動轉為浮點數
        double area = (top + bottom) * height / 2.0;

        // 依照題目範例輸出
        // fixed：固定小數點顯示
        // setprecision(1)：設定小數點後保留 1 位
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << "\n";
    }
    
    return 0;
}