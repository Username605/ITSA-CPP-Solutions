#include <iostream>
#include <string>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string child;
    string parent;

    // ITSA 標準寫法：支援多筆測資
    while (cin >> child >> parent) {
        int count = 0;
        
        // size_t 是 C++ 中用來存儲大小和索引的無號整數型態
        size_t pos = 0; 

        // 使用 find(目標, 起始位置) 來尋找
        // 只要回傳的不是 string::npos (代表有找到)，迴圈就會繼續
        while ((pos = parent.find(child, pos)) != string::npos) {
            count++;  // 找到一次，計數器 +1
            pos++;    // 💡 關鍵：把尋找起點往前推一格，這樣就能抓到「重疊」的字串！
        }

        cout << count << "\n";
    }

    return 0;
}