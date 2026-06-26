#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    
    // ITSA 標準寫法：支援多筆測資
    while (cin >> s) {
        
        // 如果字串長度不到 3，無法形成任何樣式，直接跳過
        if (s.length() < 3) continue;

        // 使用 map 來統計每個長度為 3 的子字串出現次數
        // map 會自動按照字串的 ASCII 字典序由小到大排序！
        map<string, int> pattern_count;
        int max_count = 0; // 記錄最大的出現次數

        // 滑動視窗截取所有長度為 3 的子字串
        for (size_t i = 0; i <= s.length() - 3; i++) {
            // substr(起始位置, 長度)
            string pattern = s.substr(i, 3);
            
            // 將該樣式的計數器 +1
            pattern_count[pattern]++;
            
            // 隨時更新目前的最大次數
            if (pattern_count[pattern] > max_count) {
                max_count = pattern_count[pattern];
            }
        }

        // 1. 先輸出最大的出現次數
        cout << max_count;

        // 2. 遍歷 map，把出現次數等於 max_count 的樣式都印出來
        // 因為 map 已經自動依 ASCII 排好序了，所以按照順序印就是符合題目要求的！
        for (auto const& pair : pattern_count) {
            if (pair.second == max_count) {
                cout << " " << pair.first;
            }
        }
        
        // 記得換行
        cout << "\n";
    }

    return 0;
}