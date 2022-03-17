#include <stdio.h>

int maxi(int a, int b) {
    if (a > b) return a;
    return b;
}

int mini(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
   int R, L, n, p;
   int max, min;
   scanf("%d", &R);
   for (int i = 0 ; i < R ; i++) {
       scanf("%d %d", &L, &n);
       max = 0, min = 0;
       for (int j = 0 ; j < n ; j++) {
           scanf("%d", &p);
           max = maxi(max, maxi(p, L - p));
           min = maxi(min, mini(p, L - p));
       }
       printf("%d %d\n", min, max);
   }
}

