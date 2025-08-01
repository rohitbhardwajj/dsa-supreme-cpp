#include <iostream>
using namespace std;



int main()
{
    int n,m;
    cout<<"Enter rows ";
    cin>>n;
    cout<<"Enter coloumns ";
    cin>>m;
    
        int counter=1;
        for(int i=1 ; i<=n ; i++){
            int temp =i;
            for(int j=1 ; j<=i ; j++){
                cout<<temp++<<" ";
            }
         
            cout<<endl;
        }

    return 0;
}