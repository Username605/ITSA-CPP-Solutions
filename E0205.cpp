#include <iostream>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;

    // ITSA 標準寫法：支援多筆測資
    while (cin >> x >> y) {
        
        // 1. 加法
        cout << x << "+" << y << "=" << x + y << "\n";
        
        // 2. 乘法
        cout << x << "*" << y << "=" << x * y << "\n";
        
        // 3. 減法
        cout << x << "-" << y << "=" << x - y << "\n";
        
        // 4. 除法與餘數 (加入 y == 0 的防呆檢查)
        if (y == 0) {
            // 如果 y 是 0，為了避免程式當機，我們可以印出錯誤提示 (視題目要求而定)
            cout << "Error: Division by zero!\n";
        } else {
            // 只有在 y 不為 0 時，才執行除法運算
            int q = x / y; // 商 (quotient)
            int r = x % y; // 餘數 (remainder)

            // 修正餘數為負的情況 (保持你原本精準的邏輯)
            if (r < 0) {
                if (y > 0) { 
                    r += y; 
                    q -= 1; 
                } else { 
                    r -= y; 
                    q += 1; 
                }
            }
            
            // 印出商和餘數
            cout << x << "/" << y << "=" << q << "..." << r << "\n";
        }
    }
    return 0;
}