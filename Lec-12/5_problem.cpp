/* What will be the result below according to the precedence table.
 2*3-48==5/4*6

*/
#include<iostream>
using namespace std;
int main(){
    int ans = 2*3-48;
    int ans2 = 5/4*6;
    if(ans==ans2)
    cout<<"yes";
    else
    cout<<"NO";
    cout<<endl;
    return 0;
}
