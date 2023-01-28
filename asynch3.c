#include <stdio.h>

int main() {
    int numbers[10];
    int i, min, max;
    
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    min = numbers[0];
    max = numbers[0];
    
    for (i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }   
    printf("\nThe smallest number is: %d\n", min);
    printf("The biggest number is: %d\n", max); 
    return 0;
}

