#include <stdio.h>

int main() {
    int min = 100, max = 0, arr[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
