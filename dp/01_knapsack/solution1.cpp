#include <iostream>
#include <algorithm>
#include <ctime>
#define MAX 1000
using namespace std;

int N, W;
int v[MAX], w[MAX];

// i: current processing object; j: remaining space
int max_val(int i, int j) {
    if (i == N) return 0;   //no more object
    else if (j < w[i]) return max_val(i + 1, j);    //no more space
    else return max(max_val(i + 1, j), max_val(i + 1, j - w[i]) + v[i]);  //recursive search
}

clock_t s,e;
int main() {
    cin >> N;
    for (int i = 0 ; i < N ; i++) cin >> w[i] >> v[i];
    cin >> W;
    s = clock();
    cout << max_val(0, W) << endl;
    e = clock();
    cout << "clock speed: " << e - s;
}