// Name: Aditya Sinha
// PRN: 24070123006
// Batch: EnTc A1

#include <iostream>
using namespace std;

class construct {
    int dd, mm, yy;   // day, month, year
public:
    // Parameterized constructor
    construct(int a, int b, int c) {
        dd = a;
        mm = b;
        yy = c;
    }

    void display() {
        cout << "Today's date is " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {   
    int d, m, y;

    cout << "Enter Today's Date: ";
    cout << "\nDate: ";
    cin >> d;
    cout << "Month: ";
    cin >> m;
    cout << "Year: ";
    cin >> y;

    construct date(d, m, y);  // object created with values
    date.display();

    return 0;
}

/* 
Sample Output:

Enter Today's Date: 
Date: 4
Month: 10
Year: 2025
Today's date is 4/10/2025
*/