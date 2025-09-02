// Name: Aditya Sinha
// PRN: 24070123006
// Batch: EnTc A1

#include <iostream>
using namespace std;

class Date {
public:
    int d = 28;
    int m = 8;
    int year = 2025;

    ~Date() {
        cout << "Destructor called\n";
    }
};

int main() {
    Date d1, d2, d3, d4;   // 4 objects created

    int i;
    for (i = 0; i < 4; i++) {
        Date temp;   // Temporary object created in loop
    } // Destructor called after each iteration for temp

    return 0;  // At program end, d4, d3, d2, d1 destructors called 
}