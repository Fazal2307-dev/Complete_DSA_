//Find the cube of a number using Function. 
#include<iostream>
using namespace std;
 int cube( int x){
    return x*x*x;
 }

 int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Cube of no:"<<cube(n)<<endl;
    return 0;
 }