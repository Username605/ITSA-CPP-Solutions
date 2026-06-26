#include <iostream>

using namespace std;

int main() {
    int M, N;
    
    // ITSA 標準寫法：支援多筆測資
    while (cin >> M >> N) {
        
        // 用 a 和 b 來備份 M 和 N，避免改動到原始輸入
        int a = M;
        int b = N;
        
        // 標準輾轉相除法：當餘數不為 0 時持續橫向推移
        while (b != 0) {
            int t = a % b; // t 存餘數
            a = b;         // 把除數變為被除數
            b = t;         // 把餘數變為除數
        }
        
        // 當 b 變成 0 的時候，a 就是最大公因數 (GCD)
        cout << a << "\n";
    }
    
    return 0;
}