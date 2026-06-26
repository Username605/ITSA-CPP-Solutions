#include <iostream>
#include <iomanip> // 為了使用 fixed 和 setprecision

using namespace std;

int main() {
    int miles;

    // ITSA 標準寫法：讀取直到 EOF
    while (cin >> miles) {
        
        // 1. 計算公里數 (整數 * 1.6 自動轉為 double，C++ 邏輯與 C 完全相同)
        double km = miles * 1.6;

        // 2. 依照題目要求的格式輸出
        // fixed: 固定小數點格式
        // setprecision(1): 保留一位小數
        cout << "km=" << fixed << setprecision(1) << km << "\n";
    }
    return 0;
}