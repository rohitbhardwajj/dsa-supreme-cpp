// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int power(int base , int powerr){
    int ans=1;
    for(int i=0 ; i<powerr ; i++){
         ans = ans*base;
    }
    return ans;
}
int main() {
    int n ,powerr;
    cout<<"Enter base  = ";
    cin>>n;
    cout<<"Enter power  = ";
    cin>>powerr;
   int ans =  power(n , powerr);
   cout<<ans;
    

    return 0;
}