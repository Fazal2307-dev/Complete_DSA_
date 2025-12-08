/*Print “Hello Coder Army” n times using Function.

*/
#include<iostream>
using namespace std;
 string print( int n){
    for( int i =1;i<=n;i++){
        cout<< "Hello World!"<<endl;
    }
   
}

int main(){
     int x;
     cout<<"enter value of x:";
     cin>>x;
     print(x);
     return 0;
}