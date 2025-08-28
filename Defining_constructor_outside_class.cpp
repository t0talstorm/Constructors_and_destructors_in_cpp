// Name: Aditya Sinha
// PRN: 24070123006
// Batch: EnTc A1
// Experiment: 12B
// Defining constructor outside the class

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

    student();
};
 student::student(){
        cout << "Enter name: ";
        cin.getline(name, 50);
        
        cout << "Enter the roll no.: ";
        cin >> rollno;
        
        cout << "Enter fee: ";
        cin >> fee;
    }
int main() {
    student s;
    s.display();
    return 0;
}

/*
Enter name: Hello
Enter the roll no.: 11
Enter fee: 2100

Name: Hello
Roll No: 11
Fee: 2100


=== Code Execution Successful ===
*/
