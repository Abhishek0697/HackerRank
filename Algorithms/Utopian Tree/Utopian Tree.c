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
        int n;
        int a=1;
        scanf("%d",&n);
     while(n>0)
     {  a=a*2;
        n--;
        if(n>0){a++;}
        n--;
    }
        printf("%d\n",a);
    }
    return 0;
}
