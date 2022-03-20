#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_V 100
#define INF 0x3f3f3f3f
using namespace std;

int dp[MAX_N * MAX_V], v[MAX_N], w[MAX_N];
int N, W;

int main() {
	cin >> N;
	for (int i = 0 ; i < N ; i++)
		cin >> w[i] >> v[i];
	cin >> W;

	for (int i = 0 ; i < N ; i++)
		cout << w[i] << " " << v[i] << endl;

	//initialize array as infinity (not achievable)
	fill(dp, dp + MAX_N * MAX_V + 1, INF);
	dp[0] = 0;

	for (int i = 0 ; i < N ; i++)
		cout << w[i] << " " << v[i] << endl;

	//the i^th iteration of dp[j] stands for the minimum weight that could be used to form value j
	for (int i = 0 ; i < N ; i++) {
		for (int j = MAX_N * MAX_V ; j >= 0 ; j--) {
//			if (i == 0 && j == 3)
//				cout << dp[j] << " " << w[i] << " " << v[i] << " " << dp[j - v[i]] + w[i] << endl;
			if (j < v[i])
				dp[j] = dp[j];
			else
				dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
		}
		for (int i = 0 ; i < 12 ; i++)
			cout << dp[i] << " ";
		cout << endl;
	}

	for (int i = MAX_N * MAX_V ; i >= 0 ; i -- ) {
		if (dp[i] <= W) {
			cout << i;
			break;
		}
	}

	return 0;
}