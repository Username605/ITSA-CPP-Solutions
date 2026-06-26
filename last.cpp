#include <iostream>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int start_h, start_m, end_h, end_m;
    
    // ITSA 標準寫法：支援多筆測資
    while (cin >> start_h >> start_m >> end_h >> end_m) {
        
        // 1. 將開始與結束時間全部轉換為「距離 00:00 的總分鐘數」
        int start_total_minutes = start_h * 60 + start_m;
        int end_total_minutes = end_h * 60 + end_m;
        
        // 2. 計算總共停了幾分鐘
        int parked_minutes = end_total_minutes - start_total_minutes;
        
        // 3. 計算總共跨越了幾個「半小時 (30分鐘)」
        // 題目說「未滿半小時部分不計費」，所以直接使用整數除法 (無條件捨去) 剛好符合要求！
        int half_hours = parked_minutes / 30;
        
        int fee = 0;
        
        // 4. 根據「半小時的數量」進行分段計費
        if (half_hours <= 4) {
            // 2小時以內 (4個半小時以內)
            fee = half_hours * 30;
        } 
        else if (half_hours <= 8) {
            // 超過2小時，但未滿4小時 (5~8個半小時)
            // 前4個半小時算30元，剩下的算40元
            fee = (4 * 30) + ((half_hours - 4) * 40);
        } 
        else {
            // 超過4小時以上 (9個半小時以上)
            // 前4個半小時算30元，第5~8個半小時算40元，剩下的算60元
            fee = (4 * 30) + (4 * 40) + ((half_hours - 8) * 60);
        }
        
        // 5. 輸出總金額
        cout << fee << "\n";
    }

    return 0;
}