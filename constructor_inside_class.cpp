// Name: Aditya Sinha
// PRN: 24070123006
// Batch: EnTc A1

#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name;
    long fee;

public:
    // Constructor inside the class
    Student(int r, string n, long f) {
        roll_no = r;
        name = n;
        fee = f;
    }

    void display() {
        cout << "Name: " << name 
             << "\nRoll No: " << roll_no 
             << "\nFee: " << fee << endl;
    }
};

int main() {
    // Creating an object and passing values to constructor
    Student s(106, "Aditya", 25000);
    s.display();

    return 0;
}

/* 
Sample Output:

Name: Aditya
Roll No: 106
Fee: 25000
*/