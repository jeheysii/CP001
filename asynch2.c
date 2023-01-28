#include <stdio.h>

int main() {
    int n, i, j, a[100], count;
    printf("Enter the number of element of the array: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        count = 1;
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
                a[j] = -1; 
            }
        }
        if(a[i] != -1)
        	if (count > 1){
        		printf("%d occurs %d times\n", a[i], count); }
        	else 
            	printf("%d occurs %d time\n", a[i], count);       
    }
    return 0;
}

