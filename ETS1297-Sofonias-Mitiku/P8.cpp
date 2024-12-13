#include <iostream>
using namespace std;

int main() {
    // This program prints an inverted hollow half pyramid with a vertical and diagonal line
    int rows;
    cout << "Enter the number of rows for the inverted half pyramid: ";
    cin >> rows;
    
    for (int i = 0; i < rows; i++) {
        // Print stars and spaces for hollow part
        for (int j = i; j < rows; j++) {
            if (i == 0  j == i  j == rows - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
   
    return 0;
}
