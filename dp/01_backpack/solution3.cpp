#include <iostream>
#include <algorithm>
#include <ctime>
#define MAX 1000
#define MAX_W 1000
using namespace std;

int N, W;
int v[MAX], w[MAX];
int dp[MAX][MAX_W]; // dp[i][j]: maximum value when considering first N objects and with j spaces left.

clock_t s, e;
int main() {
    cin >> N;
    for (int i = 0 ; i < N ; i++) cin >> w[i] >> v[i];
    cin >> W;
    //initialize dp matrix
    memset(dp, 0 , sizeof(dp));
    //calculate dp matrix
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j <= W ; j++) {
            if (w[i] > j) dp[i + 1][j] = dp[i][j];
            else dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
        }
    }
    for (int i = 0 ; i <= N ; i++) {
        for (int j = 0 ; j <= W ; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    //draw out the result
    cout << dp[N][W];
}