#include <iostream>
using namespace std;

int main() {
    int rows;
    char ch = 'A';

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    for (int i = 0; i <= rows; i++) {
        char printChar = ch;
        // Print characters
        for (int j = 0; j <rows; j++) {

            cout << printChar++ << " ";

        }
        cout << endl;
    }

    return 0;
}
