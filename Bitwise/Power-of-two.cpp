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
