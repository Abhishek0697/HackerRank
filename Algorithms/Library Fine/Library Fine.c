#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int da,fine=0;
    int ma;
    int ya;
    scanf("%d %d %d",&da,&ma,&ya);
    int de;
    int me;
    int ye;
    scanf("%d %d %d",&de,&me,&ye);
    if (ya>ye){fine=10000;}
    else if(ya<ye){fine=0;}
    else if(ma>me){fine=500*(ma-me);}
    else if((ma==me)&&(da>de)){fine=15*(da-de);}
    else {fine=0;}
    printf("%d",fine);
    return 0;
}
