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
