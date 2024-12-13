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
//rectangle_with_alphabet
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
//right_angle_triangle_to_right_with_alphabet
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
