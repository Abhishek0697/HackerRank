#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,N; long long int M;
    scanf("%d",&T);
   long long int a[218000];
   a[2]=1;
   for(long long int i=3;i<=90000;i=i+2) {

    long long int S=i;
    long long int j=3;
    while(S%j!=0)
    {
        j=j+2;
    }
    if(j==S)
    {  a[i]=a[i-1]+1; }
    else{a[i]=a[i-1];}
         a[i+1]=a[i];
    }

    for(long long int i=90001;i<217287;i=i+2) {

    long long int S=i;
    long long int j=3;
    while(S%j!=0&&(j!=1001))
    {
        j=j+2;
    }
    if(j==1001)
    {  a[i]=a[i-1]+1; }
    else{a[i]=a[i-1];}
         a[i+1]=a[i];
    }





    long long int b[41];
    for(int n=1;n<=40;n++){
         switch(n/4)
        {
            case 0 :  M=1 ;   break;
            case 1 :  M=n-2;  break;
            case 2 :  M=n-2+ ((n-6)*(n-7))/2; break;
            case 3 :  M=n-2+ ((n-6)*(n-7))/2+((n-9)*(n-10)*(n-11))/6 ; break;
            case 4 :  M=n-2+ ((n-6)*(n-7))/2+((n-9)*(n-10)*(n-11))/6 +((n-12)*(n-13)*(n-14)*(n-15))/24; break;
            case 5 :  M=n-2+ ((n-6)*(n-7))/2+((n-9)*(n-10)*(n-11))/6 +((n-12)*(n-13)*(n-14)*(n-15))/24+((n-15)*(n-16)*(n-17)*(n-18)*(n-19))/120; break;

            case 6 :  M=n-2+ ((n-6)*(n-7))/2+((n-9)*(n-10)*(n-11))/6 +((n-12)*(n-13)*(n-14)*(n-15))/24+((n-15)*(n-16)*(n-17)*(n-18)*(n-19))/120+ ((n-18)*(n-19)*(n-20)*(n-21)*(n-22)*(n-23))/720; break;

            case 7 :  M=n-2+((n-6)*(n-7))/2+ ((n-9)*(n-10)*(n-11))/6 + ((n-12)*(n-13)*(n-14)*(n-15))/24  +((n-15)*(n-16)*(n-17)*(n-18)*(n-19))/120+ ((n-18)*(n-19)*(n-20)*(n-21)*(n-22)*(n-23))/720+((n-21)*(n-22)*(n-23)*(n-24)*(n-25)*(n-26)*(n-27))/5040; break;

            case 8 :  M=n-2+ ((n-6)*(n-7))/2+ ((n-9)*(n-10)*(n-11))/6+((n-12)*(n-13)*(n-14)*(n-15))/24+ ((n-15)*(n-16)*(n-17)*(n-18)*(n-19))/120+ ((n-18)*(n-19)*(n-20)*(n-21)*(n-22)*(n-23))/720+((n-24)*(n-25)*(n-26)*(n-27)*(n-28)*(n-29)*(n-30)*(n-31))/40320+((n-21)*(n-22)*(n-23)*(n-24)*(n-25)*(n-26)*(n-27))/5040;break;

          case 9 :  M=n-2+ ((n-6)*(n-7))/2+ ((n-9)*(n-10)*(n-11))/6+((n-12)*(n-13)*(n-14)*(n-15))/24 + ((n-15)*(n-16)*(n-17)*(n-18)*(n-19))/120  +((n-18)*(n-19)*(n-20)*(n-21)*(n-22)*(n-23))/720 +((n-27)*(n-28)*(n-29)*(n-30)*(n-31)*(n-32)*(n-33)*(n-34)*(n-35))/362880+((n-21)*(n-22)*(n-23)*(n-24)*(n-25)*(n-26)*(n-27))/5040+((n-24)*(n-25)*(n-26)*(n-27)*(n-28)*(n-29)*(n-30)*(n-31))/40320;break;

            case 10 : M=n-2+217247+1;  break;
        }
        b[n]=M;
    }

    for(int i=1;i<=T;i++)
    {
    scanf("%d",&N);
    M=b[N];
    printf("%lld\n",a[M]);
    }
          return 0;

}
