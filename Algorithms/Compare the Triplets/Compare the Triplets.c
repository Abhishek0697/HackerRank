#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0;
    int b1;
    int b2;
    int c=0;int d=0;
    scanf("%d %d %d", &b0, &b1, &b2);
    int a[3]={a0,a1,a2};
    int b[3]={b0,b1,b2};
    for(int i = 0; i <=2; i++)
    {
        if(a[i]>b[i])
        {
         c=c+1;
        }
        else if(a[i]<b[i])
        {
            d=d+1;
        }

          }
  printf("%d %d",c,d);



    return 0;
}
