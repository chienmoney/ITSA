#include <iostream>
#include<bitset>
using namespace std;
//撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。
//輸入一個整數，介於-128～127之間。
//以8位元的二進制顯示。
int main(){
    int num;
    while(cin>>num){
        bitset<8> bit(num);
        cout<<bit<<endl;
    }
    return 0;
}