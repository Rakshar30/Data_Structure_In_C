#include <stdio.h>
int main() {
    int arr[50], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    temp = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = temp;
    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
