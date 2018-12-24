#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    int temp,p;
    for(int j = 0; j <=n-2; j++){
               for(int k=0;k<=n-2;k++)
               {if(a[k]>a[k+1])
               {temp=a[k+1];
               a[k+1]=a[k];
               a[k]=temp;}
               }
     // printf("%d ",a[n-1]);
    }

 for(int q=0;q<=n-1;q++)
    {
     int count =0;
   //  printf("%d ",a[q]);
    if(a[q]>0){
    p=a[q];
    for(int m = q; m<=n-1; m++){
        a[m]=a[m]-p;
        if(a[m]>=0){count++;}
    }
     printf("%d\n",count);
}
 }
    return 0;
}
