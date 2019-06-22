#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,l=0;
    scanf("%d",&n);
    int m=5;
    for(int i=1;i<=n;i++){
    l=l+floor(m/2);
    m=floor(m/2)*3;
}
printf("%d",l);
    return 0;
}
