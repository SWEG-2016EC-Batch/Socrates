// a1

#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << char('1' + col - 1);
        }
        cout << endl;
    }

    return 0;
}

// a2

#include <iostream>
using namespace std;

int main() {
    int n ; 
    char letter = 'A'; // Starting letter

    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 6; col++) {
            cout << letter;
            letter++;
        }
        cout << endl;
    }

    return 0;
}

// a3

#include <iostream>
using namespace std;

int main() {
    int n;

    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {
            cout << char('1' + col - 1);
        }
        cout << endl;
    }

    return 0;
}

// a4

#include <iostream>
using namespace std;

int main() {
    int n;

    for (int row = 1; row <= 5; row++) {
        for (int k = 5 - row; k >= 0; k--) {
            cout << " ";
        }
        for (int col = 1; col <= row; col++) {
            cout << char('1' + col - 1);
        }
        cout << endl;
    }

    return 0;
}

// a5

#include <iostream>
using namespace std;

int main() {
    int n;

    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {
            cout << char('A' + col - 1);
        }
        cout << endl;
    }

    return 0;
}

// a6

#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << char('a' + col - 1);
        }
        cout << endl;
    }

    return 0;
}

// full pyramid 

#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = 1; row <= n; row++) {
        // Print leading spaces
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        // Print stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// inverted full pyramid 

#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = n; row >= 1; row--) {
        // Print leading spaces
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        // Print stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
} 

// hallow full pyramid 

#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
 
        for (int col = 1; col <= row; col++) {
            if (col == 1 || col == row || row == n) { 
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}

// hallow inverted half pyramid 

#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            // Print stars only on the first row or at the borders
            if (col == 1 || col == row || row == n) {
                cout << "*";
            } else {
                cout << " "; // Print space for hollow effect
            }
        }
        cout << endl;
    }

    return 0;
}

// hallow rectangle 


#include <iostream>
using namespace std;

int main() {
    int n = 8; // Fixed size of the square

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            // Print characters only on the border
            if (row == 0 || row == n - 1 || col == 0 || col == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// inverted half pyramid 


#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
