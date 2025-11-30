#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int number = 1;

        // Print spaces
        for (int s = 0; s < rows - i; s++) {
            cout << " ";
        }

        // Print numbers
        for (int j = 0; j <= i; j++) {
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
