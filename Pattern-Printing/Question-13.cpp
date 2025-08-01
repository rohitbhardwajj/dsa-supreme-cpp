#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print numbers 1 to (n - i)
        for (int j = 1; j <= n - i; j++) {
            cout << j;
        }

        // Print 2*i stars
        for (int j = 0; j < 2 * i; j++) {
            cout << "*";
        }

        // Print numbers (n - i) to 1
        for (int j = n - i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
