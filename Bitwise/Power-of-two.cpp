#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number  = ";
    cin>>n;
   int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    
    if(count==1){
        cout<< "yes";
    }else{
        cout<< "no";
    }
    return 0;
}



// approach---2

class Solution {
public:
    bool isPowerOfTwo(int n) {
       long long int pow=1;

        if(n==1) return true;
        while(pow<n){
            if(2*pow==n){
                return true;
                break;
            }else{
                pow*=2;
            }
        }
        return false;
    }
};
