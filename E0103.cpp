#include <iostream>
#include <string>

using namespace std;

int main() {
    string n; // 宣告 C++ 字串，自動處理長度

    // ITSA 標準寫法：支援多筆測資
    while (cin >> n) {
        
        // 逆序印出前 4 個字元，並用逗號隔開
        cout << n[3] << "," << n[2] << "," << n[1] << "," << n[0] << "\n";
        
    }
    return 0;
}