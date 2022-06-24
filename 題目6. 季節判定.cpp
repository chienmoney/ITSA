#include <iostream>

using namespace std;
//試撰寫一程式，可輸入月份
//然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

int main(){
    int month;
    while(cin>>month){
        if(month>=3 && month<=5)
            cout<<"Spring"<<endl;
        else if(month>=6 && month<=8)
            cout<<"Summer"<<endl;
        else if(month>=9 && month<=11)
            cout<<"Autumn"<<endl;
        else
            cout<<"Winter"<<endl;
    }
    return 0;
}