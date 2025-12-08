#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2)
    return 0;
    for(int i =2;i<n;i++){
        if(n% i==0)
        return 0;
    }
    return 1;
}
 
int factorial( int n){
    int ans = 1;
    for(int i =1;i<=n;i++){
        ans = ans * i;

    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter value of  a and b:";
    cin>>a>>b;
    cout<<"Prime of a:"<<prime(a)<<endl;
    cout<<"Factorial of a:"<<factorial(a)<<endl;
    cout<<"Prime of b:"<<prime(b)<<endl;
    cout<<"Factorial of b:"<<factorial(b)<<endl;
    cout<<"Prime of b-a:"<<prime(b-a)<<endl;
    cout<<"Factorial of b-a:"<<factorial(b-a)<<endl;
    return 0;
}