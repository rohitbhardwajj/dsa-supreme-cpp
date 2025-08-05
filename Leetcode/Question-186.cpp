#include <iostream>
#include <cstring>
using namespace std;

void reverse(char name[], int s, int e) {
    while (s < e) {
        char temp = name[s];
        name[s] = name[e];
        name[e] = temp;
        s++;
        e--;
    }
}

void reverseWord(char name[], int size) {
    int s = 0;
    for (int i = 0; i <= size; i++) {
        if (name[i] == ' ' || name[i] == '\0') {  
            int e = i - 1;
            reverse(name, s, e);
            s = i + 1;
        }
    }
    cout << "Reversed word-by-word: " << name << endl;
}

int main() {
    char name[100];
    cout << "Enter sentence with spaces: ";
    cin.getline(name, 100);  // input with spaces
    
    int size = strlen(name);

    reverseWord(name, size);

    return 0;
}
