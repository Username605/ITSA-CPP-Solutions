#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 全域變數方便在遞迴中使用
int n, e;
vector<int> duration_time;   // 記錄每個任務本身所需的時間
vector<vector<int>> adj;     // 鄰接串列 (Adjacency List)，記錄任務間的先後順序
vector<int> memo;            // 記憶化陣列，memo[i] 代表從任務 i 開始到結束的最長總時間

// DFS 遞迴函式：計算從任務 u 開始，直到最後所有後續任務完成的最長時間
int dfs(int u) {
    // 💡 記憶化 (Memoization) 的核心：如果算過了，就直接回傳結果，不要再算一次！
    if (memo[u] != -1) {
        return memo[u];
    }
    
    int max_child_time = 0; // 記錄所有「後續任務」中，花費最久的時間
    
    // 遍歷所有必須等待 u 完成才能開始的後續任務 v
    for (int v : adj[u]) {
        max_child_time = max(max_child_time, dfs(v));
    }
    
    // 任務 u 的總時間 = 自己所需的時間 + 後續任務的最長等待時間
    memo[u] = duration_time[u] + max_child_time;
    
    return memo[u];
}

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 支援多筆測資
    while (cin >> n) {
        if (n == 0) {
            cout << 0 << "\n";
            continue;
        }

        // 1. 初始化與讀取任務時間
        // 陣列大小開 n + 1，因為任務編號是從 1 開始 (1 ~ n)
        duration_time.assign(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> duration_time[i];
        }

        // 2. 讀取任務的依賴關係 (誰要等誰)
        cin >> e;
        adj.assign(n + 1, vector<int>());
        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            // 工作 b 需要等待 a 完成，代表這是一條 a 指向 b 的有向邊 (a -> b)
            adj[a].push_back(b);
        }

        // 3. 初始化記憶化陣列為 -1，代表所有任務一開始都還沒算過
        memo.assign(n + 1, -1);
        
        int max_project_time = 0;
        
        // 4. 計算專案最早完成時間
        // 因為可能同時有好幾個「起點」任務，所以我們把每個任務都當作起點算算看，
        // 找出耗時最長的那個，就是整個專案的最早完成時間（關鍵路徑）。
        for (int i = 1; i <= n; i++) {
            max_project_time = max(max_project_time, dfs(i));
        }

        // 5. 輸出結果
        cout << max_project_time << "\n";
    }

    return 0;
}