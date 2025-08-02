#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n;
    cout<<"How a number u want to check is prime or not = ";
    cin>>n;
    bool isPrime= true;
    for(int i=2 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            isPrime =false;
            cout<<"Not a prime number";
            break;
        }
    }
    if(isPrime) cout<<"Yes its a primse number";

    return 0;
}