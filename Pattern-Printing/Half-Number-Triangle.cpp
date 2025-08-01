#include <iostream>
using namespace std;



int main()
{
    int n,m;
    cout<<"Enter rows ";
    cin>>n;
    cout<<"Enter coloumns ";
    cin>>m;
    
        
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                cout<<i;
            }
            m--;
            cout<<endl;
        }

    return 0;
}