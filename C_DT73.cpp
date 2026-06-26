#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> preorder;
vector<int> inorder;
vector<int> postorder;

// 遞迴函式：利用前序和中序來建立後序
void getPostOrder(int pre_start, int pre_end, int in_start, int in_end) {
    // 終止條件：如果起始索引大於結束索引，代表沒有節點了
    if (pre_start > pre_end || in_start > in_end) {
        return;
    }

    // 1. 從前序中取得目前的根節點
    int root_val = preorder[pre_start];
    
    // 2. 在中序中尋找根節點的位置
    int root_index = -1;
    for (int i = in_start; i <= in_end; i++) {
        if (inorder[i] == root_val) {
            root_index = i;
            break;
        }
    }

    // 3. 計算左子樹的節點數量
    int left_size = root_index - in_start;

    // 4. 遞迴處理左子樹
    // 前序的左子樹範圍：起點 + 1 ~ 起點 + 左子樹數量
    // 中序的左子樹範圍：起點 ~ 根節點前一個
    getPostOrder(pre_start + 1, pre_start + left_size, in_start, root_index - 1);

    // 5. 遞迴處理右子樹
    // 前序的右子樹範圍：起點 + 左子樹數量 + 1 ~ 結尾
    // 中序的右子樹範圍：根節點後一個 ~ 結尾
    getPostOrder(pre_start + left_size + 1, pre_end, root_index + 1, in_end);

    // 6. 左右子樹都處理完了，最後把根節點加入後序陣列 (左 -> 右 -> 中)
    postorder.push_back(root_val);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line1, line2;
    
    // 讀取整行字串 (支援多組測資連續輸入)
    while (getline(cin, line1) && getline(cin, line2)) {
        
        preorder.clear();
        inorder.clear();
        postorder.clear();

        // 使用 stringstream 將字串切割成整數陣列
        stringstream ss1(line1);
        int num;
        while (ss1 >> num) {
            preorder.push_back(num);
        }

        stringstream ss2(line2);
        while (ss2 >> num) {
            inorder.push_back(num);
        }

        int n = preorder.size();
        if (n == 0) continue;

        // 開始進行遞迴重建
        getPostOrder(0, n - 1, 0, n - 1);

        // 依照題目範例格式輸出：同行且用空白隔開
        for (int i = 0; i < postorder.size(); i++) {
            cout << postorder[i] << (i == postorder.size() - 1 ? "" : " ");
        }
        cout << "\n"; // 輸出後加上換行符號
    }

    return 0;
}