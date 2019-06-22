#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    char a[12],b[12],c[12];
    long int small=10000000000;
    scanf("%i", &n);
    for(int i = 0; i < n; i++){
        int l=0,four=0,seven=0;
        scanf("%s %s", a, b);
        l=strlen(b);
        for(int j=0;j<l;j++)
        {

            if(b[j]=='4'){four++;}
           else if(b[j]=='7'){seven++;}
        }
        if(four==seven&&(four+seven)!=0){long int num=0;
                          for(int k = 0; k < l; k++){ num=num*10+(b[k]-48);}
                          if (num<small){
                                         small=num;
                                         strcpy(c,a);}}
    }
    if(small==10000000000){printf("-1");}
    else{ printf("%s",c);}
    return 0;
}
