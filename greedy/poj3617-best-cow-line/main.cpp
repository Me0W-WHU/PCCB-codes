#include <iostream>
#include <string>
#define MAX_COWS 2000
using namespace std;

char t[MAX_COWS + 1];
char s[MAX_COWS + 1];
int n;
unsigned long a, b, i;
bool lv = false;

int main() {
    cin >> n;
    for (i = 0 ; i < n ; i++) {
        cin >> s[i];
    }
    a = 0;
    b = n - 1;
    int line_count = 0;
    while(a <= b) {
        for (i = a ; i <= b ; i++) {
            if (s[i] < s[a + b - i]) {
                lv = true;
                break;
            } else if (s[i] > s[a + b - i]) {
                lv = false;
                break;
            }
        }
        if (lv) putchar(s[a++]);
        else putchar(s[b--]);
        if (++line_count == 80) {
            putchar('\n');
            line_count = 0;
        }
    }
    return 0;
}