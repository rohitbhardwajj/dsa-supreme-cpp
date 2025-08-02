#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<<"How many fiboacchi number you want ?? = ";
    cin>>n;
    int fibo1=0 , fibo2=1;
    cout<<fibo1<<" "<<fibo2<<" ";
    for(int i=0 ; i<n-2 ; i++){
        int ans = fibo1+fibo2;
        fibo1 = fibo2;
        fibo2 = ans;
        cout<<ans<<" ";
    }

    return 0;
}