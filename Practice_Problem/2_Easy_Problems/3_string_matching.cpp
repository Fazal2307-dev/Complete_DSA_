#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    regex pattern("^(?=.*[0-9])(?=.*[!@#$%^&*(),.?\":{}|<>])[A-Z][A-Za-z0-9!@#$%^&*(),.?\":{}|<>]*$");

    if (regex_match(str, pattern)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;

}