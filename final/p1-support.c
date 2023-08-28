#include "p1-support.h"
#include <stdio.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////
//
// File           : p1support.c
// Description    : This is a set of general-purpose utility functions 
//                  we use for the 257 project #1. Fall 2022
// Author         : ***Harita Agarwal***
// Date           : ***10/9/2022***
// Notes          : ***Type bug fixes/other with dates for your records 


////////////////////////////////////////////////////////////////////////
// Function Definitions
////////////////////////////////////////////////////////////////////////

//Function definitions as decribed in the project manual 

//This function prints out the array of integer values
void display_array(unsigned int arr[], int size){
	int i;
	printf("{");
	for(i = 0;i<size;i++){
		printf("%4d%s",arr[i], (i==9)?"":",");
	}
	printf("}\n");

}


//Additional function definitions for helper functions
//Shortly describe each function above the function definition.

//This functions takes two values and adds them together to return the added value.
int bitwise_add(int num1, int num2)
{
	while (num2 != 0)
	{
		unsigned carry = num1 & num2;
		num1 = num1 ^ num2;
		num2 = carry << 1; 
	}
	return num1;
}

//complete the definition   



//This function shifts the first parameter to the left by the second parameter and then returns the final value of left shift.  
int bitwise_shift_left(int num1, int num2)
{
	int shift_One = num1 << num2;
	return shift_One;
}

//This function counts the number of sets bits and returns the counter that was stored in the number of set bits. 
int count_set_bits(int num){
	int count =0;
	while (num > 0)
	{
		if (num & 1){
			count ++;
		}
		else{
		}
		num = num >> 1;
	}
	//complete the definition  
	return count;
}

//This function prints out unsigned integer in the binary using the char array. 
void binary_string(unsigned int num, char str[BUFSZ]){
	//complete the definition
	str[0]='0';
	str[1]='b';
	int  i;
	for (i = 2; i < BUFSZ-1; i++){
		str[i] = bit_get(num, 33-i) + '0';
	}
	str[BUFSZ -1] = '\0';
}

//This function returns the remainder of 32 that was passed in the integer. 
int bitwise_mod32(int num){
	return (num & 31);
}

//This function will return the absolute value of an integer. 

int bitwise_abs(int num){
	int num2=1;
	if (bit_get(num,31) ==1){
		num = ~num;
		while (num & num2){
			num = num ^ num2;
			num2 <<= 1;
		}
		num = num ^ num2;
		//Convert numbers in int into positive values by taking their
		// absolute values and save
	}

	//complete the definition    
	return num;

}

//This function returns the bit at a location of a number.
int bit_get(int num,int offset){
	//complete the definition    
	int get_right = (num >> offset) & 1;  
	return get_right;
}

//This function determines whether an integer is odd or even. If its odd it will print 1 and if even then it will print 0.
int odd_or_even(unsigned int num){  
	return bit_get(num, 0);
}

//This function will switch integer values using XOR operator. 
void swap_ints(int *a,int *b){
	//complete the definition  
	*a = *a ^ *b;
	*b = *a ^  *b;
	*a = *a ^  *b;
}



