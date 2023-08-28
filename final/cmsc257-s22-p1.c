////////////////////////////////////////////////////////////////////////
//
//  File           : cmsc257-s22-p1.c
//  Description    : This is the main source code for for the first 
//                   project of CMSC257.  
//                   See the related assignment page for details.
//
//  Author         : 
//  Last Modified  :
//

// System Includes
#include <stdio.h>
#include <stdlib.h>

// Project Includes
#include "p1-support.h"


// Functions
///////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the CMSC257 project #1
// 
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Output       : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	int int_array1[10];
	//unsigned int uint_array1[10], uint_array2[10];
	int i;
	//int x;
	int size = 0;
	//int array1;
	 //int option = 0;
	//int offset = 0;
	//Add more local variables here as needed
	int input =0;

	if (argc < 11)
	{   
		//Exit if there are less than 10 inputs
		printf("Exiting the program, missing input");
		return 0;	
	}

	// Step a - Read in the integer numbers input at 
	// the time of execution and save them into int_array1
	for (i=1; i<11; i++) {
		int_array1[i-1] = atoi(argv[i]);//converting input to integer
		size++;  
	}
	//You don't need to modify the code above for testing
	//Modify/uncomment the code below for testing as needed
	display_array(int_array1, 10);//display the input array
	// Step b - Reverse the order of array elements in int_array1 
	//           using swap function. 


	i = 0;
	for(i = 0;i<5;i++){
		swap_ints(int_array1+i, int_array1+9-i);
	}  
	display_array(int_array1,10);

	//Add index values of each array element on the array elements
	//test entering different offsets, maybe get input using scanf
	printf("Enter the value:");	
	scanf("%d", &input);
for (i=0; i<10; i++){
		int_array1[i] = bitwise_add(input, int_array1[i]);
	}

	display_array(int_array1, 10);
	// Step c - Convert numbers in int into positive values by taking their 

	// absolute values and save them in uint_array1. 
	// Print all numbers in a single line using display_array function
	int uint_array1[i]; 	
	for(i=0;i<10;i++){
		uint_array1[i] = bitwise_abs(int_array1[i]);
	}
	display_array(uint_array1, 10);



	for (i=0; i < size; i++){
		if(odd_or_even(uint_array1[i]) == 0){
			printf("[value: %4d, # of 1 bits: %4d, even]\n", uint_array1[i], count_set_bits(uint_array1[i]));
		}
		else
		 if(odd_or_even(uint_array1[i])== 1){
			printf("[value: %4d, # of 1 bits: %4d, odd]\n", uint_array1[i], count_set_bits(uint_array1[i])); 
		}
		}

//	display_array(uint_array1, 10); 



	// Step d - Convert these positive integers to numbers 
	// in the range 0,â€¦,32 by implementing the  mod operation
	// save them into uint_array2. 
	// Print all numbers in a single line using display_array function

	int uint_array2[i];
	for(i=0;i<10;i++){
		uint_array2[i] = bitwise_mod32(uint_array1[i]);
	}
	
	display_array(uint_array2, 10);


	int swap;
	printf("Enter the value to shift left: \n");
	scanf("%d", &swap);
	for (i = 0;i < 10; i++){
	uint_array2[i]=bitwise_shift_left(uint_array1[i], swap);
	}
	
	display_array(uint_array2, 10);
	
	int k;
	//printing the string value
	for (k = 0; k < 10; k++){
	char str[35];
	//scanf("%4d", &str);
	binary_string(uint_array1[k],str);
	printf("The final value of binary: %s\n", str);
}

	int offset;
	//printf("Enter a value:");
        //scanf("%d", &offset);
	for (i=0; i < 10; i++){
	printf("Enter a value:");
	scanf("%d", &offset);
	uint_array2[i]= bit_get(uint_array1[i], offset);
}	
	display_array(uint_array2, 10);

	// Return successfully
	return(0);
}

