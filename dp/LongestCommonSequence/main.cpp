#include <iostream>
#include <algorithm>
#define MAX_LENGTH 100
using namespace std;

//dp[i][j] refers to the LCS of 'first i characters of string s' & 'first j characters of string t'
int dp[MAX_LENGTH][MAX_LENGTH];

int main() {
    string s, t;
    cin >> s >> t;
    memset(dp, 0, sizeof(dp));
    for (int i = 0 ; i < s.length() ; i++) {
        for (int j = 0 ; j < t.length() ; j++) {
            if (s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
            else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
        }
    }
    cout << dp[s.length()][t.length()];
}