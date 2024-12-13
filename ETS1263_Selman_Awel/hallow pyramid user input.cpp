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
