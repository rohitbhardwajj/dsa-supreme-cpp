#include <iostream>
using namespace std;

int main()
{
    int n ,f1=0 ,f2=1;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arry[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }
    
    while(f2<n){
        int temp = arry[f1];
        arry[f1] = arry[f2];
        arry[f2] =temp;
        f1+=2;
        f2+=2;
    }
    
    cout<<"After Reverse alternate";
    
      for (int i = 0; i < n; i++) {
        cout<<arry[i]<<" ";
    }
    
    
    

    return 0;
}
