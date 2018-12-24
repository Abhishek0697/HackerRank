#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int i,j,k,r,y=0;
    scanf("%ld%ld%ld",&i,&j,&k);

    for(int s=j-i+1;s>0;s--)
    {  long int rev=0;
        int z=i; int d=z;
        i=i+1;
        while(z!=0)
       {r=z%10;
        rev=rev*10+r;
        z=z/10;}
      //printf("%ld ",rev);
        int m=d-rev;
   // printf("%d ",m);
     int x=abs(m);
   //   printf("%d ",x);
        if(x%k==0)
        {y++;}

    }
    printf("%ld",y);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
