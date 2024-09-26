#include <stdio.h>

int main() {
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Negative elements from the Array: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (found) {
                printf(", ");
            }
            printf("%d", arr[i]);
            found = 1;
        }
    }
      if (!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}

