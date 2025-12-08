//palindrom
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter valu of x:";
    cin>>x;
    int num =x,ans =0,rem;
    if(x<0) 
    cout<<0;
    while(num){
        rem = num % 10;
        num = num/10;
        ans = ans * 10 + rem;
    }
    if(ans == x){
        cout<<"Palindrom";
}else{
    cout<<"Not Palindrom";
}
return 0;
}
