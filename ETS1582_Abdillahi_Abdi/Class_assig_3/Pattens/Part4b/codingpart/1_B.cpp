#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << j <<" ";
        }

        cout << endl;
    }

    return 0;
}