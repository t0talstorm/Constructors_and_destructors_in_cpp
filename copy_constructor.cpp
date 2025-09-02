// Name: Aditya Sinha
// PRN: 24070123006
// Batch: EnTc A1

#include <iostream>
#include <string.h>
using namespace std;

class student {
    int age;
    string name;

public:
    // Parameterized constructor
    student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    student(const student &s) {
        name = s.name;
        age = s.age;
        cout << "\nCopy Constructor called!\n";
    }

    void display() {
        cout << "\nName: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    student s("Aditya", 19);
    s.display();

    student copyC(s);   // Calls the copy constructor
    copyC.display();

    return 0;
}

/* 
Sample Output:

Name: Aditya 
Age: 19

Copy Constructor called!

Name: Aditya 
Age: 19
*/