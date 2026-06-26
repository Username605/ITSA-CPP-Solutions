#include <iostream>

using namespace std;

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    // 讀取測資筆數
    if (cin >> n) {
        // 使用 n-- 精簡迴圈寫法
        while (n--) {
            int grade1, grade2, grade3;
            
            // 直接串接讀取三個成績
            cin >> grade1 >> grade2 >> grade3;
            
            int how_many_subject_fail = 0;
            if (grade1 < 60) how_many_subject_fail++;
            if (grade2 < 60) how_many_subject_fail++;
            if (grade3 < 60) how_many_subject_fail++;

            // 核心邏輯完全保留，將 printf 替換為 cout
            if (how_many_subject_fail == 0) {
                cout << "P\n";
            } else if (how_many_subject_fail == 1) {
                if ((grade1 + grade2 + grade3) >= 220) {
                    cout << "P\n";
                } else {
                    cout << "M\n";
                }
            } else if (how_many_subject_fail == 2) {
                if (grade1 >= 80 || grade2 >= 80 || grade3 >= 80) {
                    cout << "M\n";
                } else {
                    cout << "F\n";
                }
            } else {
                cout << "F\n";
            }
        }
    }
    
    return 0;
}