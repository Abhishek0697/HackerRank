    #include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n;
    int k; long int sum=0;
    scanf("%i %i", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
        sum=sum+a[i];
    }
    sum=sum-a[k];
    sum=sum/2;
    long int b;
    scanf("%ld", &b);
    if (b==sum)
    {
    printf("Bon Appetit");}
  else
  {
    printf("%ld\n",b-sum);
  }
    return 0;
}
