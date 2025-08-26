//given one input and count note from 500, 200, 100, 50, 20, 10, 5, 2, 1
#include <iostream>
using namespace std;

int main() {
    int amount;
    int noteCount;

    cout << "Enter the total amount: ";
    cin >> amount;

    int remaining = amount;

    cout << "\nCurrency Note Count:\n";

    // Start with highest denomination
    switch (500) {
        case 500:
            noteCount=remaining/500;
            remaining%=500;
            cout << "500 : " << noteCount << endl;
        case 100:
            noteCount = remaining / 100;
            remaining %= 100;
            cout << "100 : " << noteCount << endl;

        case 50:
            noteCount = remaining / 50;
            remaining %= 50;
            cout << "50  : " << noteCount << endl;

        case 20:
            noteCount = remaining / 20;
            remaining %= 20;
            cout << "20  : " << noteCount << endl;

        case 10:
            noteCount = remaining / 10;
            remaining %= 10;
            cout << "10  : " << noteCount << endl;

        case 5:
            noteCount = remaining / 5;
            remaining %= 5;
            cout << "5   : " << noteCount << endl;

        case 1:
            noteCount = remaining / 1;
            remaining %= 1;
            cout << "1   : " << noteCount << endl;
            break;

        default:
            cout << "Invalid denomination!" << endl;
    }

    return 0;
}
