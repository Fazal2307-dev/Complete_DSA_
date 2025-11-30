#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"Enter your base value:";
    cin>>base;
    int power;
    cout<<"Enter your Power value:";
    cin>>power;
    int result =1;
    for(int i=0;i<power;i++){
        result = result*base;
    }
    cout<<base<<"^"<<power<<"="<<result<<endl;
    return 0;
}
