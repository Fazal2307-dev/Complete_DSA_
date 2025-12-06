/*
4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter value of a,b and c:";
    cin>>a>>b>>c;
    if(a>b &&a>c)
    cout<<"a";
    else if(b>a && b>c)
    cout<<"b";
    else
    cout<<"c";
    cout<<endl;
    return 0;
}