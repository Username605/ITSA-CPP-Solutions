#include <iostream>
#include <string>
#include <map> // 引入 map 標頭檔

using namespace std;

int main() {
    string input;

    // 建立雙向字典
    map<string, string> eng_to_chi = {{"dog", "狗"}, {"cat", "貓"}, {"duck", "鴨"}, {"cow", "牛"}, {"fox", "狐"}};
    map<string, string> chi_to_eng = {{"狗", "dog"}, {"貓", "cat"}, {"鴨", "duck"}, {"牛", "cow"}, {"狐", "fox"}};

    while (cin >> input) {
        // count() 可以檢查字典裡有沒有這個 Key，有就會回傳 1 (true)
        if (eng_to_chi.count(input)) {
            cout << eng_to_chi[input] << "\n"; // 直接查出中文
        } 
        else if (chi_to_eng.count(input)) {
            cout << chi_to_eng[input] << "\n"; // 直接查出英文
        }
    }

    return 0;
}