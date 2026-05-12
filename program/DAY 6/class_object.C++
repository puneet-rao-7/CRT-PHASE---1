#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_no;
    void show(){
        cout<<"name of student is "<<name<<endl;
        cout<<"roll no. of student is "<<roll_no<<endl;
    }
};

int main(){
    student s1;
    s1.name="puneet";
    s1.roll_no=27;
    s1.show();
    return 0;
}