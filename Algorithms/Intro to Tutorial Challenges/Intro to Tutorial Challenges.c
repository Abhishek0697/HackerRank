#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int V,n;
    int a[1000];
    scanf("%d%d",&V,&n);
   for (int i=0;i<n;i++){
       scanf("%d",&a[i]);
       if(a[i]==V)
       {
       printf("%d",i);break;
       }
   }




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
