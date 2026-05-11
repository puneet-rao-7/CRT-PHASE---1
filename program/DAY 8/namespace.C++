#include<iostream>
using namespace std;
namespace virat{
    void show(){
        cout<<"Virat Kohli is the best batsman in the world."<<endl;
    }
}


namespace rohit{
    void show(){
        cout<<"Rohit Sharma is the best batsman in the world."<<endl;
    }
}
int main(){
    virat::show();
    rohit::show();
    return 0;
}
