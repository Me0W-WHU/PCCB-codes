#include <iostream>
#define MAX 10001
#define INF 0x7fffffff
using namespace std;

int n, s[MAX], e[MAX], ans = 0;
int earliest, choice, last = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> e[i];
    //find which work ends earliest after last work, break when no option applies
    while (true) {
        choice = INF;
        earliest = INF;
        for (int i = 0; i < n; i++) {
            if (e[i] < earliest && s[i] >= last) {
                choice = i;
                earliest = e[i];
            }
        }
        if (choice == INF) break;
        last = e[choice];
        e[choice] = INF;
        //cout << choice << endl;
        ans++;
    }
    cout << ans;
    return 0;
}