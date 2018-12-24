#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);

    int calories[n];long int miles=0;int temp;
    for(int i = 0; i < n;  i++){
       scanf("%d",&calories[i]);
    }

     for(int i = 0; i <=n-2;  i++){
       for(int j = 0; j <=n-2;  j++){
       if(calories[j+1]>calories[j]){temp=calories[j+1];calories[j+1]=calories[j];calories[j]=temp;}
    }
    }


    for(int i = 0; i < n;  i++){
       miles=miles+(pow(2,i)*calories[i]);
    }
      printf("%ld",miles);
    return 0;
}
