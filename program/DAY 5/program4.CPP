// wap that appiles 10% discount using reference update the average bill account
#include<iostream>
using namespace std;

int main(){
    double average_bill = 1000;
    cout<<"the average bill is: "<<average_bill<<endl;
    double &discount = average_bill;
    discount = discount - (discount * 0.1);
    cout<<"the discounted bill is: "<<average_bill<<endl;
    return 0;
}
// wap to swap two numbers using 