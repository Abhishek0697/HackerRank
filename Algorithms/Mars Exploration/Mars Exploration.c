#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char S[101];
    int x=0,y=0,z=0;
    scanf("%s",S);
    int n=strlen(S);
    for(int i=0;i<=n-1;i=i+3)
    {
        if(S[i]!='S'){x++;}
    }
    for(int i=1;i<=n-1;i=i+3)
    {
        if(S[i]!='O'){y++;}
    }
    for(int i=2;i<=n-1;i=i+3)
    {
        if(S[i]!='S'){z++;}
    }
    printf("%d",x+y+z);

    return 0;
}
