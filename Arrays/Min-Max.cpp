#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arry[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    int max = arry[0], min = arry[0];

    for (int i = 1; i < n; i++) {
        if (arry[i] > max)
            max = arry[i];
        if (arry[i] < min)
            min = arry[i];
    }

    cout << "MAX = " << max << " MIN = " << min;

    return 0;
}
