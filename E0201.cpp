#include <iostream>
#include <iomanip> // 必須引入這個標頭檔，才能控制小數點位數

using namespace std;

int main() {
    int base, height;

    // ITSA 標準寫法：連續讀入兩個整數
    while (cin >> base >> height) {
        
        // 計算面積：除以 2.0 讓結果自動變成浮點數 (這點 C 與 C++ 邏輯完全一樣)
        double area = (base * height) / 2.0;

        // 依照題目範例輸出
        // fixed：固定以小數點格式輸出 (不會變成科學記號)
        // setprecision(1)：設定小數點後只印出 1 位
        cout << "Triangle area:" << fixed << setprecision(1) << area << "\n";
    }
    
    return 0;
}