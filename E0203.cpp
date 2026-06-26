#include <iostream>
#include <iomanip> // 為了使用 fixed 和 setprecision

using namespace std;

int main() {
    int n;
    
    // 1. 讀取第一行的 n，代表有幾個正方形要算
    if (cin >> n) {
        
        double w;
        // 2. 跑迴圈，處理這 n 個正方形
        for (int i = 0; i < n; i++) {
            cin >> w; // 讀取邊長
            
            double area = w * w; // 計算面積
            
            // 3. 處理四捨五入 (保留你原本的數學邏輯)
            area = (int)(area * 10.0 + 0.5) / 10.0;
            
            // 4. 印出結果，保留一位小數
            cout << fixed << setprecision(1) << area << "\n";
        }
    }
    return 0;
}