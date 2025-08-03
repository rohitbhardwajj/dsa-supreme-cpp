#include <iostream>
using namespace std;

int main()
{
    int n ,elem;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arry[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }
    cout<<"which number do u want do find in an array : ";
    cin>>elem;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if(arry[i]==elem){
            flag = false;
            cout<<"Element present at index "<<i;
            break;
        }
    }
    if(flag) cout<<"Not exist";
    
    

    return 0;
}
