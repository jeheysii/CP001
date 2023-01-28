#include <stdio.h>
int main(){
	//case study 1
    int num, i = 2;
    printf(" Enter a positive number: ");
    scanf("%d", &num);
	//getting the prime factorization
    printf("\n Prime factorization of %d = ", num);
    while (num != 1){
        if (num % 1 == 0){
            while (num % i == 0){
                printf("%d", i);
                num = num / i;
                if (num == 1)
                    printf("\n");
                else
                    printf(" X ");
            }
            i++;
        }
    }
}
