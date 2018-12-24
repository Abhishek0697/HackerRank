#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d",&T);
    for(int j=0;j<T;j++){
        int n,a,b,i=0,temp;int A[1000000];
        scanf("%d %d %d",&n,&a,&b);
        if(a>b){temp=a;a=b;b=temp;}

        while(i<n){
            A[i]=((n-1-i)*a)+(i*b);
            i++;
        }
        if (a==b){printf("%d",A[0]);}
        else {for(int k=0;k<=n-1;k++){printf("%d ",A[k]);}}
        printf("\n");
    }
    return 0;
}
