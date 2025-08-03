#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        vector<int> freqValues;  
        int count = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                freqValues.push_back(count);
                count = 1;
            }
        }
        freqValues.push_back(count); 

        sort(freqValues.begin(), freqValues.end()); 

    
        for (int i = 1; i < freqValues.size(); i++) {
            if (freqValues[i] == freqValues[i - 1])  
                return false;
        }

        return true;
    }
};
