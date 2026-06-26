#include <iostream>
#include <string>

using namespace std;

int main() {
    int type;

    // ITSA 標準寫法：支援多筆測資
    while (cin >> type) {
        int h = 5; // 題目固定說五層

        if (type == 1) {
            // --- 類型 1: 空心三角形 ---
            for (int i = 0; i < h; i++) {
                // 1. 先用 string 產生前面的空白
                cout << string(h - 1 - i, ' ');

                // 2. 判斷印星星的方式
                if (i == 0) {
                    // 第一層：只有一顆星
                    cout << "*\n";
                } else if (i == h - 1) {
                    // 最後一層：星星全滿 (2*h - 1 顆)
                    cout << string(2 * h - 1, '*') << "\n";
                } else {
                    // 中間層： 星 + 中間空白 + 星
                    cout << "*" << string(2 * i - 1, ' ') << "*\n";
                }
            }
        } 
        else if (type == 2) {
            // --- 類型 2: 實心三角形 ---
            for (int i = 0; i < h; i++) {
                // 直接一行串接：(h - 1 - i) 個空白 + (2 * i + 1) 個星星
                cout << string(h - 1 - i, ' ') << string(2 * i + 1, '*') << "\n";
            }
        } 
        else if (type == 3) {
            // --- 類型 3: 倒實心三角形 ---
            for (int i = 0; i < h; i++) {
                // 直接一行串接：i 個空白 + 剩餘的星星
                cout << string(i, ' ') << string((2 * h - 1) - 2 * i, '*') << "\n";
            }
        }
    }
    return 0;
}