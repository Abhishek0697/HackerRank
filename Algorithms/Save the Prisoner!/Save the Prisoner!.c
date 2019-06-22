#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int saveThePrisoner(long int n, long int m, long int s){
   long int r,t;
        t=m%n;
    if(s+t-1<=n){r=s+t-1;}else{r=s+t-n-1;}
    if(t==0&&s==1){r=n;}
    if(r==0){r++;}
    return(r);
}

int main() {
    int t;
    scanf("%d", &t);
    for(int a = 0; a < t; a++){
       long int n;
        long int m;
        long int s;
        scanf("%ld %ld %ld", &n, &m, &s);
        long int result = saveThePrisoner(n, m, s);
        printf("%ld\n", result);
    }
    return 0;
}
