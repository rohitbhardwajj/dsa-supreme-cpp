#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arry[n];

    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    cout << "Before Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arry[j] > arry[j + 1]) {
                swap(arry[j], arry[j + 1]);
            }
        }
    }

    cout << "After Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;

    return 0;
}
