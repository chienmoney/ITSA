#include <iostream>
#include<climits>
#include <iomanip>
using namespace std;
//問題描述 ：寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。
//輸入說明 ：輸入十個數字，以空白間隔。
//輸出說明 ：輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字
int main(){
    float a[10];
    for(int i=0;i<10;i++)
        cin>>a[i];
    float max=0;
    float min=INT_MAX;
    for(int i=0;i<10;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    cout<<fixed<<setprecision(2)<<"maximum:"<<max<<endl;
    cout<<"minimum:"<<min<<endl;

    return 0;
}