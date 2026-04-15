#include <stdio.h>

int main() {
    int n, sum = 0;
    int avg;

    printf("enter the value of n=");
    scanf("%d", &n);

    int arr[n];

    printf("array");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n; i++) {
        sum += arr[i];
    }

    avg = sum / n;

    // printf("%d", avg);

    int add;

    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            add += arr[i];
        }
    }

    printf("the add of greater number is %d", add);

    return 0;
}
