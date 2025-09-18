#include <stdio.h>

int	main(){
	int number = 0;
	
	printf("Please enter a positive number: ");
	scanf("%d", &number);
	
	//check the number 
	if (number <= 0){
		printf("Error: The number is not positive.\n");
		return -1; //exit with the error code -1
	}

	if (number >100){
		printf("Error: The number is too large.\n");
		return -2; //exit with the error code -2
	}

	printf("The number is valid: %d\n", number);
	return 0; //exit with the success code 0
}