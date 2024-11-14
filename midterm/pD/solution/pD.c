#include <stdio.h>

int a[4][4];
int f(int idx1, int idx2 ,int idx3) {
    return a[idx1][1] + a[idx2][2] + a[idx3][3];
}
int main() {
    int n, ans = -5000000;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) scanf("%d", &a[i][j]);
    }

    int ans_idx1, ans_idx2, ans_idx3;

    if( n == 1 ) {
        printf("1\n");
    }
    else if( n == 2 ) {
        if( ans < f(1,2,0) ) ans = f(1,2,0), ans_idx1 = 1, ans_idx2 = 2;
        if( ans < f(2,1,0) ) ans = f(2,1,0), ans_idx1 = 2, ans_idx2 = 1;

        printf("%d %d\n", ans_idx1, ans_idx2);
    }
    else if( n == 3 ) {
        if( ans < f(1,2,3) ) ans = f(1,2,3), ans_idx1 = 1, ans_idx2 = 2, ans_idx3 = 3;
        if( ans < f(1,3,2) ) ans = f(1,3,2), ans_idx1 = 1, ans_idx2 = 3, ans_idx3 = 2;
        if( ans < f(2,1,3) ) ans = f(2,1,3), ans_idx1 = 2, ans_idx2 = 1, ans_idx3 = 3;
        if( ans < f(2,3,1) ) ans = f(2,3,1), ans_idx1 = 2, ans_idx2 = 3, ans_idx3 = 1;
        if( ans < f(3,1,2) ) ans = f(3,1,2), ans_idx1 = 3, ans_idx2 = 1, ans_idx3 = 2;
        if( ans < f(3,2,1) ) ans = f(3,2,1), ans_idx1 = 3, ans_idx2 = 2, ans_idx3 = 1;

        printf("%d %d %d\n", ans_idx1, ans_idx2, ans_idx3);
    }

    

    return 0;
}