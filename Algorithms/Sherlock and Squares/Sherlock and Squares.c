#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

long int t,m,n;
    float j,k;
    scanf("%ld",&t);
   for (int i=1;i<=t;i++)
    {
    scanf("%ld %ld",&m,&n);
       j=sqrt(m);
      j=ceil(j);
       k=sqrt(n);
       k=floor(k);
       m=(k-j+1);
       printf("%ld\n",m);
   }
        return 0;
}
