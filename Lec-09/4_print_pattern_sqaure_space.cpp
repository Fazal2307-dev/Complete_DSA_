#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
     for(int row=n;row>=2;row--){
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        for(int col=1;col<=(2*n-2*row);col++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
     }
     // reverse value
     for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        for(int col=1;col<=(2*n-2*row);col++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
     }
     return 0;
}