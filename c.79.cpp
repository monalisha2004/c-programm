// C Program to check if two matrices are equals or not 
#include <stdio.h> 
#define N 4 // Macros 

// This function returns 1 if A[][] and B[][] are equal 
// otherwise it returns 0 
int areSame(int A[][N], int B[][N]) 
{ 
	int i, j; 
	for (i = 0; i < N; i++) 
		for (j = 0; j < N; j++) 
			if (A[i][j] != B[i][j]) 
				return 0; 
	return 1; 
} 

// driver code 
int main() 
{ 

	// create two matrices 
	int A[N][N] = { { 1, 2, 3, 4 }, 
					{ 1, 2, 3, 4 }, 
					{ 1, 2, 3, 4 }, 
					{ 1, 2, 3, 4 } }; 

	int B[N][N] = { { 1, 2, 3, 4 }, 
					{ 1, 2, 3, 4 }, 
					{ 1, 2, 3, 4 }, 
					{ 1, 2, 3, 4 } }; 

	// Display first matrix 
	printf("\n First Matrix \n"); 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) { 
			printf(" %d", A[i][j]); 
		} 
		printf("\n"); 
	} 

	// Display second matrix 
	printf("\n Second Matrix \n"); 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) { 
			printf(" %d", B[i][j]); 
		} 
		printf("\n"); 
	} 

	// check if Matrices are equals or not 
	// areSame(A, B) function accept two matrices as input 
	// and return 1 if matrices are equals otherwise return 
	// 0 
	if (areSame(A, B)) 
		printf("\n Matrices are equal"); 
	else
		printf("\n Matrices are not equal"); 
	return 0; 
}

