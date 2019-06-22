#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    int m;
    int k;
    scanf("%i %i %i", &n, &m, &k);
    int a[n][n];
    for(int i=0;i<=n-1;i++){
        a[i][i]=m+i*k;
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i;j<=n-2;j++){a[i][j+1]=a[i][j]-1;}
    }
    for(int j=0;j<=n-1;j++)
    {
        for(int i=j;i<=n-2;i++){a[i+1][j]=a[i][j]-1;}
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++){printf("%d ",a[i][j]);}
        printf("\n");
    }


    return 0;
}
