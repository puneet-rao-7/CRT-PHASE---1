// wap that takes no. of coke bottle as a input you have to print the total volume of coke if in one bottle has 250 ml
 #include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of coke bottles: ";
    cin>>n;
    int total_volume = n * 250;
    cout<<"the total volume of coke is: "<<total_volume<<" ml"<<endl;
    return 0;
}