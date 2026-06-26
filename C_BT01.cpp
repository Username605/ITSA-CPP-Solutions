#include <iostream>
#include <vector>

using namespace std;

int N, M, H, K;
int ways = 0; // 紀錄有幾種跳回原點的方法
vector<vector<bool>> visited;

// 馬的 8 個走法 (直的走兩格橫的走一格，或橫的走兩格直的走一格)
int dx[8] = {1, 1, -1, -1, 2, 2, -2, -2};
int dy[8] = {2, -2, 2, -2, 1, -1, 1, -1};

void dfs(int x, int y) {
    // 終止條件：如果回到起點，而且起點已經被標記為走過
    // (代表這是一條成功從外面繞回來的路徑)
    if (x == H && y == K && visited[x][y]) {
        ways++;
        return;
    }

    // 嘗試 8 個可能的方向
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 檢查是否超出棋盤邊界
        // 注意：題目說水平線 0 到 N，垂直線 0 到 M，所以包含 N 和 M
        if (nx >= 0 && nx <= N && ny >= 0 && ny <= M) {
            
            // 如果該點還沒走過，就繼續往下探索
            if (!visited[nx][ny]) {
                visited[nx][ny] = true;  // 標記為走過
                dfs(nx, ny);             // 遞迴往下走
                visited[nx][ny] = false; // 回溯 (Backtrack)：拔除標記，讓其他路線可以走
            }
        }
    }
}

int main() {
    // 刷題加速起手式 (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 支援多筆測資輸入
    while (cin >> N >> M) {
        cin >> H >> K;
        
        ways = 0;
        
        // 根據棋盤大小初始化 visited 陣列為 false
        // 大小為 (N+1) x (M+1)，因為座標是從 0 開始到 N 和 M
        visited.assign(N + 1, vector<bool>(M + 1, false));

        // 從起點 (H, K) 開始 DFS 尋找所有路徑
        // 注意：我們在呼叫前「沒有」把 visited[H][K] 設為 true
        // 這樣馬才有機會在最後一步「跳回」起點！
        dfs(H, K);

        // 輸出總共的方法數
        cout << ways << "\n";
    }

    return 0;
}