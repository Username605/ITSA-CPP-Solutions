#include <iostream>
#include <algorithm> // 必須引入這個標頭檔才能使用 max()

using namespace std;

int main() {
    int a, b, c;

    while (cin >> a >> b >> c) {
        
        // 密技：使用大括號 {} 把 a, b, c 包起來丟給 max()
        // 它就會自動幫你找出裡面最大的數字並印出來！
        cout << max({a, b, c}) << "\n";
        
    }
    return 0;
}