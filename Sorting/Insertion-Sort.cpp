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

    cout << "Before Insertion Sort: ";
    for(int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;


    for (int i = 1; i < n; i++) {
    int key = arry[i];       
    int j = i - 1;

  
    while (j >= 0 && arry[j] > key) {
        arry[j + 1] = arry[j];
        j--;
    }

    
    arry[j + 1] = key;
}


    cout << "After Insertion Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;

    return 0;
}
