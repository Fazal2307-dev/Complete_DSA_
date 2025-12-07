//reverse a number
#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter you num:";
    cin>>num;
    int ans =0;
    while(num>0){
        int remainder = num %10;
        ans = ans *10 + remainder;
        num = num/10;
    }
    cout<<ans<<endl;
    return 0;
}