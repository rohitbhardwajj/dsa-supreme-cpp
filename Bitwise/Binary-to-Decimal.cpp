#include <iostream>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cout << "Enter a binary number: ";
    cin >> n;
    int power = 1;

    while(n != 0){
        int lastDigit = n % 10;
        ans += (lastDigit * power);
        power *= 2;
        n /= 10;
    }

    cout << ans;
    return 0;
}
