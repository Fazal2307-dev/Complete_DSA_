#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter value of a:";
    cin>>a;
    int b;
    cout<<"Enter value of b:";
    cin>>b;
    int temp;
    temp =a;
    a=b;
    b=temp;
    cout<<"value of a="<<a<<"\nvalue of b="<<b<<endl;
    return 0;

}