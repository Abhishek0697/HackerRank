#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int t;
    scanf("%d %d",&n,&t);
    int width[n+5];
    for(int i = 0; i < n; i++){
       scanf("%d",&width[i]);
    }
    for(int a = 0; a < t; a++){
        int i;
        int j;
        int min=5;
       // min=width[i];//printf("%d a\n",min);
        scanf("%d %d",&i,&j);
        for(int k=i;k<=j;k++){
            if(width[k]<min){min=width[k];}
        }
        printf("%d\n",min);
    }
    return 0;
}
