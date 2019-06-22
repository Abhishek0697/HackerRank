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
    for(int a0 = 0; a0 < t; a0++){
        int n,r,y=0;
        scanf("%d",&n);
        int q=n;long int p=n;
        int digit=0;
        while(q!=0)
        {     r=q%10;
               // printf("%d ",r);
             if(r!=0){ if(p%r==0){y++;}}
              q=q/10;
        }
        printf("%d\n",y);
    }
    return 0;
}
