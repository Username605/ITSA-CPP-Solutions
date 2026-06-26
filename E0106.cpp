#include <iostream>
#include <string>

using namespace std;

void print_rectangle() {
    int width, height;
    cin >> width >> height;
    
    for (int i = 0; i < height; i++) {
        // 直接產生一個長度為 width 的星星字串並換行
        cout << string(width, '*') << "\n";
    }
}

int main() {
    print_rectangle();
    return 0;
}