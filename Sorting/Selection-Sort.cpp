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

    cout << "Before Sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < n; i++) {
        int smallest = arry[i];
        int indx = i;

        for(int j = i+1; j < n; j++){
            if(arry[j] < smallest){
                smallest = arry[j];
                indx = j;
            }
        }

        swap(arry[i], arry[indx]);
    }

    cout << "After Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;

    return 0;
}
