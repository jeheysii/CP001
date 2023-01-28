#include<stdio.h>

int main(){
	int choice;
    float number1, number2, outcome;
    
    //showing instructions
    printf("John Cee S. Gumera Calculator\n\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("[5] Exit\n");
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
	
    	switch(choice) {
        case 1:
            printf("\nEnter the first number: ");
            scanf("%f", &number1);
            printf("Enter the second number: ");
            scanf("%f", &number2);
            outcome = number1 + number2;
            printf("\nThe sum is: %.2f\n", outcome);
            break;
        case 2:
            printf("\nEnter the first number: ");
            scanf("%f", &number1);
            printf("Enter the second number: ");
            scanf("%f", &number2);
            outcome = number1 - number2;
            printf("\nThe difference is: %.2f\n", outcome);
            break;
        case 3:
            printf("\nEnter the first number: ");
            scanf("%f", &number1);
            printf("Enter the second number: ");
            scanf("%f", &number2);
            outcome = number1 * number2;
            printf("\nThe product is: %.2f\n", outcome);
            break;
        case 4:
            printf("\nEnter the first number: ");
            scanf("%f", &number1);
            printf("Enter the second number: ");
            scanf("%f", &number2);
            outcome = number1 / number2;
            printf("\nThe quotient is: %.2f\n", outcome);
            break;
        case 5:
            printf("Exiting the calculator...\n");
            break;
        default:
        	//when the user chose outside of 1 to 5
            printf("Invalid choice. Please choose a number between 1 and 5.\n");
    return 0;
	}
}


