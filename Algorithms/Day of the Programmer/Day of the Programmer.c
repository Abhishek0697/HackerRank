#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int year,date=13;
    scanf("%d", &year);
    if(year<1918){if(year%4==0){date=12;}}
    else if(year==1918){date=26;}
    else{if((year%400==0)||((year%4==0)&&(year%100!=0))){date=12;}}
    printf("%d.09.%d",date,year);
    return 0;
}
