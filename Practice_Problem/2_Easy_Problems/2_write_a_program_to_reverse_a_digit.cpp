#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int reversse_num=0;
    while(n>0){
        reversse_num = reversse_num*10 +n%10;
        n=n/10;
    }
    cout<<"Your Reverse no is "<<reversse_num<<endl;
    return 0;
}