#include <iostream>
using namespace std;
//問題描述 ：請設計一程式，輸入一個陣列並且反轉後再輸出。
//輸入說明 ：第一行先輸入矩陣的行、列，之後再輸入陣列元素。
//輸出說明 ：反轉後的矩陣。

int main(){
    int row,column;
    while(cin>>row>>column){
        int array[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cin>>array[i][j];
            }
        }
        for(int i=0;i<column;i++){
                cout<<array[0][i];
            for(int j=1;j<row;j++){
                cout<<" "<<array[j][i];
            }
            cout<<endl;
        }
    }
    return 0;
}