#include <iostream>
#include <string>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    
    // ITSA 標準寫法：支援多筆測資
    while (cin >> s) {
        
        bool is_palindrome = true;
        
        // 派出雙指標：left 從最左邊 (0) 開始，right 從最右邊 (長度-1) 開始
        int left = 0;
        int right = s.length() - 1;

        // 當 left 還在 right 左邊時，繼續往中間走
        while (left < right) {
            
            // 如果兩端發現不一樣的字，就不是迴文
            if (s[left] != s[right]) {
                is_palindrome = false;
                break; // 提早結束檢查，節省時間
            }
            
            // 腳步往中間移動
            left++;
            right--;
        }

        // 題目說明寫中文「是/否」，但範例是「YES/NO」
        // 在解題系統中，通常以範例 (Sample Output) 的格式為準！
        if (is_palindrome) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}