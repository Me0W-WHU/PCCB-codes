#include <iostream>
#define MAX_N 100

using namespace std;
int n, nums[MAX_N], k;

bool test(int p, int sum) {
    if (sum + nums[p] == k) return true;
    if (p < n) return test(p + 1, sum) || test(p + 1, sum + nums[p]);
    return false;
}

int main() {
    cin >> n;
    for (int i = 0 ; i < n ; i++)
        cin >> nums[i];
    cin >> k;
    cout << test(0, 0);
}