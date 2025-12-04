#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    for(int row=1;row<=n;row++){
        //for space printing
        for(int col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //for star printing
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}