#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(char col='a';col<='a'+n-1;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}