#include<iostream>
using namespace std;

class student{
    public:
    static int reg_no;
    student(){
        reg_no++;
    }
}
int student::reg_no = 100; //initialization of static member
int main(){
    student s1;
    student s2;
    student s3;

    student :: showregno(); //accessing static member using class name and scope resolution operator


    return 0;
}