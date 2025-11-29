#include<iostream>
using namespace std;
int main(){
    int marks_1oth;
    cout<<"Enter Your 10th Marks:";
    cin>>marks_1oth;
    int marks_12th;
    cout<<"Enter Your 12th Marks:";
    cin>>marks_12th;
    int graduation_marks;
    cout<<"Enter Your graduation marks:";
    cin>>graduation_marks;
    double average = (marks_1oth+marks_12th+graduation_marks)/3;
    cout<<average<<endl;
    if(average>75.00){
        cout<<"You  are Qualified For Placement";
    }else{
        cout<<"You are not Qualified For Placement";
    }
    return 0;


}