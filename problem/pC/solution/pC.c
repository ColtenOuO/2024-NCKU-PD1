#include <stdio.h>

int is_prime(int num) {
    for(int i=2;i<num;i++) {
        if( num % i == 0 ) return 0;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);

    for(int i=2;i<=500;i++) {
        int a = i, b = n - i;
        if( is_prime(a) == 1 && is_prime(b) == 1 ) {
            printf("%d %d\n", a, b);
            break;
        }
    }

    return 0;
}