// THERE ARE 3 TYPES OF CONSTRUCTOR IN C++
// 1. Default Constructor: A constructor that takes no parameters or has default values for all parameters. It is automatically called when an object is created without any arguments.
// 2. Parameterized Constructor: A constructor that takes parameters to initialize the object with specific values. It allows you to create objects with different initial states.
// 3. Copy Constructor: A constructor that creates a new object as a copy of an existing object
// . It is used when an object is passed by value, returned from a function, or explicitly copied.
#include <iostream>
using namespace std;

class students
{
public:
    int roll_no;
    string name;
    // Default constructor
    students()
    {
        roll_no = 0;
        name = "Your Name Please";
    }
    // Parameterized constructor

    students(int r, string name)
    {
        roll_no = r;
        this->name = name;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main()
{

    // s1 objects calling default constructor
    students s1;
    s1.show();

    // s2 objects calling parameterized constructor
    students s2(25, "Puneet");
    s2.show();
    return 0;
}