int findUnique(int *arr, int size)
{
    int count, ans = -1;

    for (int i = 0; i < size; i++) {
        count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            ans = arr[i];
            break;
        }
    }

    return ans;
}


// appraohc---2 using xor

int findUnique(int *arr, int size)
{
    int  ans = 0;

    for (int i = 0; i < size; i++) {
       ans = ans^arr[i];
    }

    return ans;
}


// XOR ka use tab karo jab:

// 🔁 1. Ek number do baar aata ho, baaki sab ek baar (1 duplicate)
// 📌 Condition:

// Array size = n

// Elements = 1 to n-1

// Only 1 number repeats once, baaki sab unique

// 🧠 Use XOR:

// cpp
// Copy
// Edit
// int xorResult = 0;
// for (int i = 0; i < n; i++) xorResult ^= arr[i];
// for (int i = 1; i < n; i++) xorResult ^= i;
// 🔍 Example:
// Input: [1, 3, 4, 2, 2] → Output: 2

// ✅ 2. Find the Number That Appears Only Once (All Others Twice)
// 📌 Condition:

// Array has elements where every number appears twice, except one.

// 🧠 Use XOR:

// cpp
// Copy
// Edit
// int ans = 0;
// for (int i = 0; i < n; i++) ans ^= arr[i];
// 🔍 Example:
// Input: [1, 2, 3, 2, 1] → Output: 3

