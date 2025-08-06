#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arry[n];
    cout << "Enter numbers in the array (only one number appears twice): ";

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> arry[i];
        freq[arry[i]]++;  
    }

    for (auto it : freq) {
        if (it.second == 2) {
            cout << "Number that appears twice is: " << it.first << endl;
            break;
        }
    }

    return 0;
}



// approach-------------2


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arry[n];
    cout << "Enter numbers in the array (only one number appears twice): ";

    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arry[i] == arry[j]) {
                cout << "Number is: " << arry[i] << endl;
                return 0;  
            }
        }
    

    cout << "No duplicate found." << endl;
    return 0;
    }
}

