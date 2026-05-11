
#include<iostream>
using namespace std;

int value =100;
int *ptr = &value;
cout<<"the value is: "<<*ptr<<endl;
cout<<"the address of value is: "<<ptr<<endl;
*ptr = 200;
cout<<"the value is: "<<*ptr<<endl;
cout<<"the address of value is: "<<ptr<<endl;
return 0;