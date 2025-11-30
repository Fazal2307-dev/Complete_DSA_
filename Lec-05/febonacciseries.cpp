#include<iostream>
using namespace  std;
int main(){
int last =0;
int prv=1;
int current;
int n;
cout<<"Enter value of n:";
cin>>n;
for(int i=0;i<n;i++){
current = last + prv;
prv=last;
last=current;
cout<<current<<" ";
}
return 0;
}