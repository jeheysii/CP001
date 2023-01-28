#include <stdio.h>

int main() {
    int n, array[10], even = 0, odd = 0;

    // Input 10 elements into the array
    printf("Enter 10 numbers: ");
    for (n = 0; n < 10; n++) {
        scanf("%d", &array[n]);
    }

    // Counting even and odd numbers
    for (n = 0; n < 10; n++) {
        if (array[n] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    } 
    printf("\nCount of odd numbers: %d\n", odd);
    printf("Count of even numbers: %d\n", even);
    return 0;
}

