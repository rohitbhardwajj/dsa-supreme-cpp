#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int f = 0, l = s.length() - 1;
        bool ispalindrome = false;

        while (f < l) {
            if (!isalnum(s[f])) {
                f++;
                continue;
            }
            if (!isalnum(s[l])) {
                l--;
                continue;
            }

            if (tolower(s[f]) == tolower(s[l])) {
                f++;
                l--;
                ispalindrome = true;
            } else {
                return false;
            }
        }

        if (ispalindrome) return true;
        return true; 
    }
};
