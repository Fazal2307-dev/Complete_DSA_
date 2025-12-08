/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your value:";
    cin>>num;
    while(num>9){
        int ans=0,rem;
        while(num>0){
            rem = num %10;
            num = num/10;
            ans = ans + rem;

        }
        num = ans;
    }
    cout<<num<<endl;
    return 0;

}
