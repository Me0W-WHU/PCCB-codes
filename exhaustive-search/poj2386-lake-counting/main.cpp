#include <iostream>
using namespace std;
int N, M;
int i, j;
char f[101][101];
int c = 0;
void dfs(int p, int q) {
    f[p][q] = '.';
    for (int k = -1 ; k <= 1 ; k++) {
        for (int l = -1 ; l <= 1 ; l++) {
            int np = p + k, nq = q + l;
            if (np >= 0 && np < N && nq >= 0 && nq < M && (f[np][nq] == 'W')) {
                dfs(np, nq);
            }
        }
    }
}
int main() {
    cin >> N >> M;
    for (i = 0 ; i < N ; i++) {
        for (j = 0 ; j < M ;j++) {
            cin >> f[i][j];
        }
    }

    for (i = 0 ; i < N ; i++) {
        for (j = 0 ; j < M ; j++) {
            if (f[i][j] == 'W') {
                dfs(i, j);
                c++;
            }
        }
    }

    cout << c;
}
