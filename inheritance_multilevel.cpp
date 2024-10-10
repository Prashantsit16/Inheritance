//Prashant
//102
#include <iostream>
using namespace std;
class Subject { // Base class
public:
    void speak() {
        cout << "Subject is C++ and Data Structures" << endl;
    }
};
class Experiment : public Subject { // Derived class from Subject
public:
    void study() {
        cout << "Experiment number is 14" << endl;
    }
};
class Topic : public Experiment { // Derived class from Experiment
public:
    void research() {
        cout << "Topic for experiment is Inheritance" << endl;
    }
};
int main() {
    Topic exp;
    exp.speak();    // Inherited from Subject
    exp.study();    // Inherited from Experiment
    exp.research(); // Method of Topic class
    return 0;
}