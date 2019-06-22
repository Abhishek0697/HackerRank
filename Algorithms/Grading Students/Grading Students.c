#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
        int s=a[i]%5;
        if(a[i]>=38&&s>=3&&s<5)
        {a[i]=a[i]+5-s;}
      printf("%d\n",a[i]);

    }


    return 0;
}
