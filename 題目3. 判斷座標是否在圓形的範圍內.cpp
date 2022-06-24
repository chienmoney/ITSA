#include <iostream>
#include<math.h>
using namespace std;
//有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。
int main(){
    int x,y;
    while(cin>>x>>y){
        double c2=pow(x,2)+pow(y,2);
        if(c2>40000)
            cout<<"outside"<<endl;
        else
            cout<<"inside"<<endl;
    }
    return 0;
}