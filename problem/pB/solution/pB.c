#include <stdio.h>
int main() 
{
    int n,m;
    char c[11] = {};
    scanf("%d %d\n", &n, &m);
    for(int i=1;i<=n;i++) scanf("%c", &c[i]);
    int pos = 0;
    for(int i=1;i<=n;i++) {
        if( c[i] == 'V' ) pos = i;
    }
    for(int i=0;i<m;i++) {
        char opt;
        int num;
        scanf("\n%c %d", &opt, &num);
        if( opt == 'L' ) {
            if( pos - num <= 0 ) {
                printf("Out of range\n");
                continue;
            }
            else c[pos] = '.', pos -= num, c[pos] = 'V';
        }
        else {
            if( pos + num > n ) {
                printf("Out of range\n");
                continue;
            }
            else c[pos] = '.', pos += num, c[pos] = 'V';
        }

        for(int j=1;j<=n;j++) printf("%c", c[j]);
        printf("\n");
    }

    return 0;
}