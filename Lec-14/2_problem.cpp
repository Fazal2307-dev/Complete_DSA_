//swap two no
#include<iostream>
using namespace std;
void swap( int &x,int &y){
    int z;
    z=x;
    x=y;
    y=z;
}
int main(){
    int a,b;
    cout<<"Enter value of a and b:";
    cin>>a>>b;
    swap(a,b);
    cout<<"Value of a:"<<a<<"\nvalue of b:"<<b<<endl;
    return 0;
}