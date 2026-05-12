// wap to create a student management system which store and display the details of students  using constructor overloading.
// name , student id,batch,email id,crt class no.

#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll_no;
    string batch;
    string email_id;
    int crt_class_no;

    student(){
        roll_no=25;
        name ="puneet";
        batch="btech cse 3rd year";
        email_id="puneet@example.com";
        crt_class_no=14 ;
    }

    student(string n, int r, string b, string e, int c){
        name = n;
        roll_no = r;
        batch = b;
        email_id = e;
        crt_class_no = c;
    }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Batch: "<<batch<<endl;
        cout<<"Email ID: "<<email_id<<endl;
        cout<<"CRT Class No: "<<crt_class_no<<endl;
    }
};

int main(){
    student s1;
    s1.show();

    cout<<"\n";

    student s2("vansh", 26, "btech cse 3rd year", "vansh@example.com", 15);
    s2.show();

    return 0;
}