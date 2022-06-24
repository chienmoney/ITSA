#include <iostream>
#include<string>
using namespace std;
//問題描述：
//迴文是指從前面讀和從後面讀都相同的一個數字或一段文字
//例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。
int main(){
    int num;
    while(cin>>num){
        string a(to_string(num));
        bool same=true;
        for(int i=0;i<a.size();i++){
            if(a[i]!=a[a.size()-i-1]){
                same=false;
            }
        }
        if(!same){
            cout << "NO" << endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}