#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int x=1; int height=ar[0];
    for(int i= 1; i< n;i++)
    {
    if   (height>ar[i])
    {int a=0;}
    else
    { if(height==ar[i])
         {x=x+1;}
           else{height=ar[i];
                 x=1;}
         }
    }
    return(x); // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout<< result<<endl;
    return 0;
}
