#include <iostream>
using namespace std;
//假設某個停車場的費率是停車2小時以內，每半小時30元
//超過2小時，但未滿4小時的部份，每半小時40元
//超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。
//如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。
int main(){
    int h,m,h2,m2;
    cin>>h>>m>>h2>>m2;
    int min=h2*60+m2-h*60-m;
    int halfhour=min/30;
    int total=0;
    if(halfhour<=4)
        total=halfhour*30;
    else if(halfhour<=8)
        total=4*30+(halfhour-4)*40;
    else
        total=4*30+4*40+(halfhour-8)*60;
    cout<<total<<endl;
    return 0;
}