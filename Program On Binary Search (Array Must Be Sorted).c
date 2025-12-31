#include <stdio.h>
int main() {
    int arr[50], n, key, low = 0, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    high = n - 1;
    printf("Enter element to search: ");
    scanf("%d", &key);
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at position %d", mid + 1);
            return 0;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("Element not found.");
    return 0;
}
