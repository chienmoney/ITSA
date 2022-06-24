#include <iostream>
using namespace std;
//問題描述：試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

int main(){
    int num;
    while(cin>>num){
        int total=0;
        int plus=0;
        for(int i=0;i<num;i++){
            plus+=3;
            if(plus>num) break;
            else total+=plus;
        }
        cout<<total<<endl;
    }
    return 0;
}