#include <stdio.h>
int main() {
    int arr[50], n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    for (int i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];
    arr[pos - 1] = val;
    n++;
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
