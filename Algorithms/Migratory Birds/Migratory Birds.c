#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,o=0,t=0,th=0,f=0,fi=0;
    scanf("%i", &n);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
        switch(a[i])
        {
            case 1:o=o+1;break;
            case 2:t=t+1;break;
            case 3:th=th+1;break;
            case 4:f=f+1;break;
            case 5:fi=fi+1;break;

        }
    }
    int b[5]={o,t,th,f,fi};
    int large=o,final;
    for(int j=0;j<=4;j++)
    {

       if (b[j]>large)
      {large=b[j];
       final=j+1;
      }
    }
   printf("%d",final);

    return 0;
}
