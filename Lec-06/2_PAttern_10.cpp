#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    for(int row=1;row<=n+1;row++){
        for(int col=1;col<=n;col++){
            cout<<"10 ";
        }
        cout<<endl;
    }
    return 0;
}