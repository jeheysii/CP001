#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int userPassword() {
  char password[10], userpw[] = "Password";
  printf("Enter your password: ");
  int i = 0;
  while (i < 10) { 
    password[i] = getch(); 
    if (password[i] == '\r') 
      break;
    printf("X"); 
    i++;
  }
  password[i] = '\0';
  if (strcmp(password, userpw) == 0) {
    return 1;
  } else {
    printf("\nAccess denied.\n");
    return 0;
  }
}
int main() {
  double amount, total;
  char choice;
  int validpw = 0;

  do {
  	total = 0;
    if (!validpw) {
      validpw = userPassword();
    if (!validpw) {
        continue;
      }
    }
  	double deposit;
    int den[9] = {1000, 500, 200, 100, 50, 20, 10, 5, 1};
    int countingDen[9] = {1000, 500, 200, 100, 50, 20, 10, 5, 1};
    system("cls"); // clear the screen
    printf("Enter the amount for deposit: ");
    scanf("%lf", &deposit);
    double amount = deposit;
    
    printf("\nDenomination\t\tCount\t\tTotal\n");
    for (int i = 0; i < sizeof(den)/sizeof(den[0]); i++){
        countingDen[i] = amount / countingDen[i];
        total = countingDen[i]*den[i];
        amount -= total;
        if (total) {
            printf("%-16d\t%-16d%-15.2f\n", den[i], countingDen[i], total); 
   		} 
	}
    double cents[4] = {0.25, 0.10, 0.05, 0.01};
	double totalCents;
    int countingCents[4] = {25, 10, 5, 1};
    for (int i = 0; i < 4; i++) {
        countingCents[i] = (amount*100) / countingCents[i];
        totalCents = countingCents[i] * cents[i];
        amount -= totalCents;
        if (totalCents){
        printf("%-16.2f\t%-16d%-15.2f\n", cents[i], countingCents[i], totalCents); 
        }
    }
    printf("-------------------------------------------------\n");
    printf("Total\t\t\t\t\t%.2f\n", deposit);
    
    
    // Asking if user wants to deposit again
    printf("\nDeposit again?(Y/N) ");
    scanf(" %c", &choice);
  } while (choice == 'Y' || choice == 'y');
	printf("Thank you for using our services.\n");		
  return 0;
}
