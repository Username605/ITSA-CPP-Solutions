#include <iostream>

using namespace std;

int main() {
    // (選擇性) 加速輸入輸出，刷題好習慣
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    // ITSA 標準寫法：支援多筆測資
    while (cin >> n) {
        
        // 💡 C++ 密技：
        // hex : 切換輸出模式為「十六進位」
        // uppercase : 強制將十六進位中的 A-F 以「大寫」印出
        cout << hex << uppercase << n << "\n";
        
        // ⚠️ 注意：C++ 的 hex 和 uppercase 設定完後會「持續有效」。
        // 如果之後突然想印回十進位，記得要手動切換回來：cout << dec;
    }

    return 0;
}