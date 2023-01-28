#include <stdio.h>
int main(){
	//case study 2
	int num,fact=1,i;
	//identifying positive and negative number
	printf(" Please enter a number: ");
	scanf("%d", &num);
		if (num>=0){
			printf("\n %d is a nonnegative number", num);
		}
		else{
			printf("\n %d is a negative number", num);
		}
	//getting the factorial
	for (i=1;i<=num;i++){
		fact=fact*i;
	}
		printf("\n\n %d! is equals to %d", num,fact);	
	return 0;
}


