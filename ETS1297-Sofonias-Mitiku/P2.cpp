#include <iostream>
using namespace std;

int main() {
    int rows;
    char ch = 'A';

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        char printChar = ch;
        // Print characters
        for (int j = 1; j <= i; j++) {

            cout << printChar++ << " ";

        }
        cout << endl;
    }

    return 0;
}
