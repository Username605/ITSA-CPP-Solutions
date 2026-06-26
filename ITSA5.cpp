#include <iostream>
#include <bitset> // 💡 必須引入這個標頭檔才能使用 bitset

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    // ITSA 標準寫法：支援多筆測資
    while (cin >> n) {
        
        // 呼叫 bitset<8>，括號裡面放入你的數字 n
        // 它就會自動把它轉換成 8 位元的二進位格式，超級方便！
        cout << bitset<8>(n) << "\n";
        
    }

    return 0;
}