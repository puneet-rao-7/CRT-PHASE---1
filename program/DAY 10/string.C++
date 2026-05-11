#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1 = "Hello ";
    string str2 = "jecrc";
   cout<<str1<<""<<str2<<endl;

   int n= str1.length();
   cout<<"length of string is "<<n<<endl;
   cout<<"after appending string is "<<str1.append("student")<<endl;
   cout<<"is string empty "<<str2.empty()<<endl;
   cout<<"after concation string is "<<str1+"bacho"<<endl;
   cout<<"after concation string is 2 "<<str1<<endl;
   str2.push_back('u');
   str2.pop_back();
    cout<<"after pop_back() method : "<<str2<<endl;

    int index = str1.find("ello");
    cout<<"index of 'ello' in str1 "<<index<<endl;
    char ch = str1.at(1);
    cout<<"character at index 1 in str1 :"<<ch<<endl;
    str1.swap(str2);
    cout<<"after swapping str1 and str2 : " <<ch <<endl;
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl;

    string subStr = str2.substr(5,6);
    cout<<"substring of str2 from index 5 to 6 : "<<subStr<<endl;
    string str3 ;
    // cin>>str3;
    getline(cin,str3);
    cout<<"you entered : "<<str3<<endl;
    return 0;
}