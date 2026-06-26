#include <iostream>
#include <string>
#include <algorithm> // 為了使用 reverse()

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; // 直接宣告成字串，不用管 long long 了！
    
    while (cin >> s) {
        
        string reversed_s = s; // 複製一份原本的字串
        
        // 呼叫內建函式，把 reversed_s 從頭到尾原地反轉
        reverse(reversed_s.begin(), reversed_s.end());

        // 直接用 == 比較兩個字串長得一不一樣！
        if (s == reversed_s) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}