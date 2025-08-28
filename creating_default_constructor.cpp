// Name: Aditya Sinha
// PRN: 24070123006
// Batch: EnTc A1
// Experiment: 12A

#include <iostream>

using namespace std;

class student {
    int rollno;
    char name[50];
    double fee;

public:
    void display() {
        cout << endl << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Fee: " << fee << endl;
    }

    student() {
        cout << "Enter name: ";
        cin.getline(name, 50);
        
        cout << "Enter the roll no.: ";
        cin >> rollno;
        
        cout << "Enter fee: ";
        cin >> fee;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}


/*
Output :

Enter name: Aditya
Enter the roll no.: 6
Enter fee: 1000

Name: Aditya
Roll No: 6
Fee: 1000


=== Code Execution Successful ===
*/
