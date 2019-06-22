#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,e=100;
    int k;
    scanf("%d %d",&n,&k);
    int c[n+1];
    for(int i = 0; i < n; i++){
       scanf("%d",&c[i]);
    }
    c[n]=c[0];
    int a=0;
    int j=0;
    int p=(n/k);
    while(j!=p)
    {  if(c[a+k]==1){e=e-3;}
       else{e=e-1;}
        a=a+k;
        j++;}
    printf("%d",e);
    return 0;
}
