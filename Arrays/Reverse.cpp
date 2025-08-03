#include <iostream>
using namespace std;

int main()
{
    int n ,f=0 ,l=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arry[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }
    l=n-1;

        while(f<l){
        int temp = arry[f];
        arry[f] = arry[l];
        arry[l] = temp;
        f++;
        l--;
    }
    cout<<"After Reverse ";
    
      for (int i = 0; i < n; i++) {
        cout<<arry[i]<<" ";
    }
    
    
    

    return 0;
}
