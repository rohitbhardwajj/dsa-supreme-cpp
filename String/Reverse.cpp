#include <iostream>
#include <cstring>
using namespace std;

void reverse(char name[] , int length){
    int f=0,l=length;
    while(f<l){
        swap(name[f],name[l]);
        f++;
        l--;
    }
    
    cout<<"After Reverse = " <<name;
}

int main()
{
   
   char name[20];
   
   cout<<"Enter your name = ";
   cin>>name;
       int length = strlen(name);
   
    reverse(name ,length-1);
    return 0;
}