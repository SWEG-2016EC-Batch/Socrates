//rectangle_with_number

#include <iostream>
using namespace std;

int main() 

{

    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
//rectangle_with_alphabet

#include <iostream>
using namespace std;

int main() 

{
    
    char ch ='A';
    for (int i=0; i<5; i++)
    {
        for( int j=0; j<6; j++)
        {
            cout<<ch;
            ch++;
        }
       cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() 

{
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// up_pyramid

#include <iostream>
using namespace std;

int main() {

    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}

//inverted_half_pyramid

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
            if (i == 0 || j == i || j == rows - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
   
    return 0;
}
//hollow_full_pyramid

#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = i; j < height; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == height) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
//inverted_half_pyramid

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
//inverted_full_pyramid
#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i) {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
//hollow_rectangle
#include <iostream>
using namespace std;

int main() 

{
int rows, cols;
    cout<<"RECTANGLE "<<endl;
    cout<<" Enter the numbr of rows fo the rectangle:";
cin>>rows;
cout<<"Enter the number of coloums for the rectangle:";
cin>>cols;
    for(int i = 1; i <=rows; i++) {
        for(int j = 1; j <= cols; j++) {
            if (  i==1 || i==rows || j==1 || j==cols)
            {
               cout <<"*"<<"";
            }
            else
            {
                  cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
