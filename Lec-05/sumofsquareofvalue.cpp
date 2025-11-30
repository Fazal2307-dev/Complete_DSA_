#include<iostream>
using namespace std;
int main(){
    int value ;
    cout<<"Enter your value:";
    cin>>value;
    int sum =0;
    for(int i =1;i<=value;i++){
        sum = sum +i*i;
    }
    cout<<"Sum of value:"<<sum;
    return 0;
}