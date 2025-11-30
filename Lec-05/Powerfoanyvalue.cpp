#include<iostream>
using namespace std;
int main(){
    int num,n;
    cout<<"Enter num value:";
    cin>>num;
    int pow ;
    cout<<"Enter pow value:";
    cin>>pow;
    n= num;
    for(int i=1;i<pow;i++){
    n = num*n;
    }
    cout<<n;
    return 0;
}