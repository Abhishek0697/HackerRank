#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char c[101];
    scanf("%s",&c[0]);
    long long int a,b=0,i=0,j=0,count=0;
    long long int n;
    scanf("%lld",&n);
    int l=strlen(c);
    a=n/l;
    while(i<l){
        if(c[i]=='a'){count++;}
        i++;}

    b=count*a;
    a=n%l;
    while(j<a){
        if(c[j]=='a'){b++;}
        j++;}


    printf("%lld",b);
    return 0;
}
