#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a = 0; a < t; a++){
        int n,sum,w,q,r;
        int c;
        int m;
        scanf("%d %d %d",&n,&c,&m);
        sum=n/c;
        w=sum;
        while(w>=m){
            q=w/m;
            sum=sum+q;
            r=w%m;
            w=q+r;
        }

        printf("%d\n",sum);
    }
    return 0;
}
