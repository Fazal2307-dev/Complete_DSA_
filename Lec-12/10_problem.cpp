//printing binary num
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter value of num:";
    cin>>num;
    int ans=0,rem,mul=1;
    while(num>0){
        rem = num %2;
        ans = ans+ rem*mul;
        num/=2;
        mul*=10;

    }
    cout<<ans<<endl;
}