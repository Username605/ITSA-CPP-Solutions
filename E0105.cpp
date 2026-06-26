#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;

    while (cin >> num) {
        for (int i = 0; i < 5; i++) {
            int count = num[i] - '0';
            
            // 密技：直接產生 count 個 '*' 並印出，連換行一起串接！
            cout << string(count, '*') << "\n";
        }
    }
    return 0;
}