#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q;
    scanf("%d",&q);
    for(int a = 0; a < q; a++){
        int x;
        int y;
        int z;
        scanf("%d %d %d",&x,&y,&z);
        int r=abs(x-z);
        int s=abs(y-z);
        if(r>s){printf("Cat B\n");}
        else if(r<s){printf("Cat A\n");}
        else{printf("Mouse C\n");}
    }
    return 0;
}
