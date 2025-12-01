#include<iostream>
using namespace std;
int main(){
    int a1;
    cout<<"enter value of a1:";
    cin>>a1;
    int a2;
    cout<<"enter value of a2:";
    cin>>a2;
    int n;
    cout<<"enter vlaue of n:";
    cin>>n;
    int d = a2-a1;
    int nth_term = a1+(n-1)*d;
    cout<<nth_term<<endl;
return 0;
}