#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter  value of n:";
    cin>>n;
    for(int row=1;row<=n;row++){
        //for space
        for(int col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //for char
        for(char name ='a';name<='a'+row-1;name++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}
