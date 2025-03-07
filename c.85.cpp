// C program to demonstrate the boundary
// element of matrix
#include <stdio.h>

// This function is display the Boundary of matrix
void printBoundary(int mat[][4], int m, int n)
{
	printf("\n Boundary of Matrix \n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == n - 1
				|| j == n - 1)
				printf(" %d", mat[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
}

// Driver code
int main()
{
	int mat[4][4] = { { 1, 2, 3, 4 },
					{ 1, 2, 3, 4 },
					{ 1, 2, 3, 4 },
					{ 1, 2, 3, 4 } };

	printf("\n Input Matrix \n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", mat[i][j]);
		}
		printf(" \n");
	}

	// printBoundary(a, 4, 4) function accepts a matrix, no
	// of rows and columns as input and display boundaries of
	// matrix
	printBoundary(mat, 4, 4);
	return 0;
}

