// C Program to remove All Occurrences of 
// an element in an array using functions 
#include <stdio.h> 

// function declaration 
int remove_element(int* array, int n, int val) 
{ 
	int i; 
	
	// iterates array elements 
	for (i = 0; i < n; i++) 
		
		// if the given array element is not equal to given 
		// value then print array element 
		if (array[i] != val) 
			printf("%d ", array[i]); 
} 

int main() 
{ 
	int array[6] = { 1, 2, 1, 3, 1 }, size = 5, value = 1; 
	remove_element(array, size, value); 
}

