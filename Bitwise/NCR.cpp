// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1 ; i<=n ; i++){
        ans*=i;
    }
    return ans;
}

int main() {
    int n,r;
    cout<<"Enter n = ";
    cin>>n;
    cout<<"Enter r = ";
    cin>>r;
    if (r > n) { cout << "Invalid input: r cannot be greater than n"; return 0; }
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = (fact(n-r));
    
    int ncr = nfact/(rfact*nrfact);
    cout<<ncr;

    

    return 0;
}