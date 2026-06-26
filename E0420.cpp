#include <iostream>
#include <string> // C++ 的 string 標頭檔

using namespace std;

int main() {
    // 刷題加速密技 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string child_str; // 子字串
    string main_str;  // 母字串

    // ITSA 標準寫法：支援多筆測資
    // 注意輸入順序：依照你的原碼，先讀 child 再讀 main
    while (cin >> child_str >> main_str) {
        
        // 💡 C++ 密技：使用 find() 尋找子字串
        // 如果 find() 找不到目標，它會回傳一個特殊的常數叫做 string::npos
        if (main_str.find(child_str) != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}