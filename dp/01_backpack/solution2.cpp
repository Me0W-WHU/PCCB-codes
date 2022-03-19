#include <iostream>
#include <algorithm>
#include <ctime>
#define MAX 1000
#define MAX_W 1000
using namespace std;

int N, W;
int v[MAX], w[MAX];
int dp[MAX][MAX_W];

// i: current processing object; j: remaining space
int max_val(int i, int j) {
    if (dp[i][j] != -1) return dp[i][j];
    else if (i == N) return 0;
    else if (j < w[i]) return max_val(i + 1, j);
    else return dp[i][j] = max(max_val(i + 1, j), max_val(i + 1, j - w[i]) + v[i]);  //recursive search & storing intermediary value
}

clock_t s, e;
int main() {
    cin >> N;
    for (int i = 0 ; i < N ; i++) cin >> w[i] >> v[i];
    cin >> W;
    //initialize dp matrix
    s = clock();
    memset(dp, -1, sizeof(dp));
    cout << max_val(0, W) << endl;
    e = clock();
    cout << "clock speed:" << e - s;
}

