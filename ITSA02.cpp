#include <iostream>
#include <iomanip> // 為了使用 fixed 和 setprecision

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int miles;

    // C++ 標準寫法：使用 while(cin) 讀取直到 EOF
    while (cin >> miles) {
        
        // 計算公里數 (整數 * 1.6 自動轉為 double)
        double km = miles * 1.6;

        // 輸出結果：只有數字，保留一位小數，記得換行
        cout << fixed << setprecision(1) << km << "\n";
    }

    return 0;
}