#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
       long int a[5],b[5];
       long long sum=0;
       for(int i = 0; i <=4;i++){
       scanf("%ld",&a[i]);
           b[i]=a[i];
       sum=sum+a[i];
    }
       for(int i = 0; i <=3;i++){
       if(a[i]>=a[i+1])
       {a[i+1]=a[i];
       }
       }
    long long large=a[4];


    for(int i = 0; i <=3;i++){
       if(b[i]<b[i+1])
       {b[i+1]=b[i];}
    }
    long long small=b[4];


        printf("%lld %lld",sum-large,sum-small);
        return 0;
}
