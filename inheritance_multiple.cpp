//Prashant
//102
#include <iostream>
using namespace std;
// Base class 1
class College {
public:
    void college() {
        cout << "College Name: SIT, Pune " << endl;
    }
};
// Base class 2
class Branch {
public:
    void branch() {
        cout << "Branch is ENTC" << endl;
    }
};
// Derived class
class Class : public College, public Branch {
public:
    void cLass() {
        cout << "Class is B division" << endl;
    }
};
int main() {
    Class c;
    c.college();  
    c.branch();  
    c.cLass();      
    return 0;
}