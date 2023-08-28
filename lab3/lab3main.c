#include <stdio.h>
#include "lab3header.h"

int main(void) 
{ 
	char ch = 'N'; /* variable to accept the user's choice, 
										N represents the condition not to exit from the program */ 
	int num; /* variable to accept a number */
	int a[] = {0,1,2,3,4};
	while( (ch != 'Y') && (ch != 'y') ) 
	{ 

		printf("Enter R to reverse the digits of the number \n"); 
		printf("Enter E to determine if the number is even or odd \n"); 
		printf("Enter P to determine if the number is prime \n");
		printf("Enter S to sum array by index \n");
		printf("Enter B to exponentiate the base and the power of the exponent \n"); 
		printf("Enter Y or y to exit the program\n"); 
		printf("Enter your choice: "); 

		scanf("%c", &ch); 
		while(getchar() != '\n'); /*clears the input buffer, alternatively 
																you can use fflush*(stdin)*/

		switch(ch) 
		{ 
			case 'R': case 'r': 
				printf("Enter the number to be reversed:\n");
				int numr = reverse_number(num);
				printf("%d",numr); 
				scanf("%d", &num);
				while(getchar() != '\n'); 
				break; 

			case 'E': case 'e': 
				printf("Enter the number to check if it is even or odd:\n"); 
				scanf("%d", &num);
				if (num % 2 == 0)
				printf("Your number is even\n");
				else 
				printf("Your number is odd\n"); 
				while(getchar() != '\n'); 
				break; 

			case 'P': case 'p': 
				printf("Enter the number to check if it is prime or not:\n"); 
				scanf("%d", &num); 
				if(is_prime (num) ==1)
				while(getchar() != '\n'); 
				break; 

			case 'S': case 's':
				printf("Enter the index to sum array:\n");
				

				scanf("%d",&num);
				int sum = sumall(a,3);
				printf("Sum of the array = %d\n",sum);
				while(getchar() != '\n');
				break;

			case 'B': case 'b':
				printf("Enter the number of the base and power of the exponent: \n");
			
				int base, exponent;
				scanf("%d %d",&base,&exponent);
				int result = power(base,exponent);
				printf("Answer: %d to the power of %d = %d",base,exponent,result);
				while(getchar() != '\n');
				break;

			case 'Y': case 'y': 
				printf("Exiting the program.\n\n"); 
				break;

			default: 
				printf("You have entered a wrong choice. Try again\n"); 
				break; 
		} /* switch */
	} /* while */ 
	return 0; 
} /* main */ 
