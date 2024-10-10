//Prashant
//102
#include <iostream>
using namespace std;
class Class { // Base class
public:
    char division;
    string name;
    void EB() {
        cout<<"Please enter your class: ";
        cin>>division;
    }
    void names(){
        cout<<"Please enter your name: ";
        cin>>name;
    }
    void display(){
        cout << "Student is in ENTC-" << division << endl;
    }
};
class Student1 : public Class { // Derived class 1
public:
    void Name1() {
        cout <<"Student name is "<<name<< endl;
    }
};
// Derived class 2
class Student2 : public Class {
public:
    void Name2() {
        cout <<"Student name is "<<name<< endl;
    }
};
int main() {
    Student1 d;
    Student2 c;
    d.EB();  // Inherited from Class
    d.names();
    c.EB();  // Inherited from Class
    c.names();
    d.display();
    d.Name1(); // Method of Student1 class
    c.display();
    c.Name2(); // Method of Student2 class
    return 0;
}