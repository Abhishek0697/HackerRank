#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
       scanf("%d",&a[0]);
       int high=a[0],h=0;
       int low=a[0],l=0;

    for(int i = 1; i < n; i++){
       scanf("%d",&a[i]);
        if(a[i]>high){h++;high=a[i];}
        else if(a[i]<low){l++;low=a[i];}
    }
     printf("%d %d",h,l);
    return 0;
}
