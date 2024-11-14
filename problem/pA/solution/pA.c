#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[10] = {}, idx = 0;
    while( n != 0 ) {
        arr[idx] = n % 10;
        n /= 10;
        idx++;
    }

    int ans = 0;

    for(int i=0;i<idx;i++) {
        int left = 0, right = 0;
        for(int j=0;j<idx;j++) {
            if( i == j ) continue;
            left *= 10, left += arr[j];
        }
        for(int j=idx-1;j>=0;j--) {
            if( i == j ) continue;
            right *= 10, right += arr[j];
        }

        if( left == right ) printf("%d ", i+1), ans = 1;
    }

    if( ans == 0 ) printf("Impossible\n");

    return 0;
}