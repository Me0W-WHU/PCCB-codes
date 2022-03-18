#include <iostream>
#define MAX 20001
using namespace std;

int n = 0;
long long ans = 0;
int l[MAX];
int main() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> l[i];
    while (n > 1) {
        //initialize two pointers, make sure they're in the correct order
        int s1 = 0, s2 = 1;
        if (l[s1] > l[s2]) {
            int temp = s2;
            s2 = s1;
            s1 = temp;
        }
        //scan for the two shortest planks
        for (int i = 2; i < n; i++) {
            if (l[i] < l[s1]) {
                s2 = s1;
                s1 = i;
            } else if (l[i] < l[s2]) s2 = i;
        }
        //join them to form a new plank, calculate cost, and delete the original planks
        //cout << l[s1] << " " << l[s2] << " " << ans << endl;
        l[s1] = l[s1] + l[s2];
        l[s2] = l[n - 1];
        ans += l[s1];
        n--;
    }
    cout << ans;
}
