#include <iostream>
#include <iomanip>
#include <cmath> // 引入 hypot()

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2;

    while (cin >> x1 >> y1 >> x2 >> y2) {
        
        double dx = x1 - x2;
        double dy = y1 - y2;

        // 終極密技：直接呼叫 hypot()，它會自動幫你做平方相加再開根號！
        double dist = hypot(dx, dy);

        cout << fixed << setprecision(2) << dist << "\n";
    }
    
    return 0;
}