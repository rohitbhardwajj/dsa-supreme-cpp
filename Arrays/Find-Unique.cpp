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
