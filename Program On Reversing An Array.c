#include <stdio.h>
int main() {
    int arr[50], n, start = 0, end;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    end = n - 1;
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
