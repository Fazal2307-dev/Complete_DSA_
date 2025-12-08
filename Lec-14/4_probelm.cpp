/*There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a.
 Do it using Function.
*/

#include<iostream>
using namespace std;
 void swap(int &x,int &y,int &z){
    int w;
    w= x;
    x=y;
    y=z;
    z=w;

 }
 int main(){
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter value of c:";
    cin>>c;
    swap(a,b,c);
   cout<<"swap value:"<<a<<b<<c<<endl;
   return 0;
 }