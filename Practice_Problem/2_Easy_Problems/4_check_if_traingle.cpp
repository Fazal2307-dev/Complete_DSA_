#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter value of a,b,c:";
    cin>>a>>b>>c;
    if(a+b>c){
        cout<<"true";
    }else if(b+c>a)
    cout<<"true";
    else if(a+c>b)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}