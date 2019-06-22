#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    if (x2>x1&&v2>v1){
    printf("NO");}
    else{
          if((v1!=v2) && ((x2-x1)%(v1-v2))==0)
            {printf("YES");}
                else{printf("NO");}
    //while(x1<=10000&&x2<10000){
                    //if(x1==x2){printf("YES");break;}
                    //x1=x1+v1;
                    //x2=x2+v2;}
                   //if(x2!=x1){printf("NO");}
    }

    return 0;
}
