#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    double a=0;double b=0;double c=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
for(int i = 0; i < n; i++){
    if (arr[i]>0)
    {a++;}
    else if(arr[i]<0){
       b++;
    }
        else if(arr[i]==0){
          c++;
        }

}
    printf("%f\n%f\n%f",a/n,b/n,c/n);

    return 0;
}
