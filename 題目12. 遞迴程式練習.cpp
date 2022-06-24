#include <iostream>
#include <math.h>
using namespace std;
//給定下列遞迴函式 : f(n)=n+1 when n=0,n=1 ; f(n)=f(n-1)+f(floor(n/2))
//請計算出 f (k) 。
//輸入說明：輸入值為一個大於 1 的整數。
//輸出說明：f(k) 的計算結果。
int f(int n){
    if(n==0) return 1;
    else if(n==1) return 2;
    else return f(n-1)+f(floor((float)n/2));
}
int main(){
    int k;
    cin>>k;
    cout<<f(k)<<endl;
    return 0;
}