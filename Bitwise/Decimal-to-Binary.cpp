#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary = 0, place = 1;

    while (n != 0) {
        int rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }

    cout << "Binary: " << binary;
    return 0;
}



// approach ---2  using bitset inbuilt function


#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    cout << "Binary: " << bitset<32>(n) << endl;  // 32-bit binary
    return 0;
}


//approach ---3 using stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    stack<int> s;
    if (n == 0) s.push(0);

    while (n > 0) {
        s.push(n % 2);
        n /= 2;
    }

    cout << "Binary: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}

