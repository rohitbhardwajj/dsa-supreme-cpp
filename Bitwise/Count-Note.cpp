// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n ,hundred=0 , fifty=0 , total=0;
    cout<<"Enter a number : ";
    cin>>n;
    
    while(n!=total){
        if(total<n){
            int temp = total+100;
            if(temp>n){
                break;
            }
            total+=100;
            hundred++;
        }
    }
    while(n!=total){
        if(total<n){
            int temp = total+50;
            if(temp>n){
                break;
            }
            total+=50;
            fifty++;
        }
    }
    cout<<"100 = "<<hundred ;cout<<endl;
    cout<<"50 = "<<fifty; cout<<endl;

    return 0;
}


// approach-------2


#include <iostream>
using namespace std;

int main() {
    int n, hundred = 0, fifty = 0;
    cout << "Enter a number : ";
    cin >> n;

    hundred = n / 100;
    n = n % 100;

    fifty = n / 50;
    n = n % 50;

    cout << "100 = " << hundred << endl;
    cout << "50 = " << fifty << endl;

    return 0;
}
