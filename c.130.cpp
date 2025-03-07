// C program for the above approach
#include "stdio.h"

// Struct defined for the inch-feet system
struct InchFeet {
	// Variable to store the inch-feet
	int feet;
	float inch;
};

// Function to find the sum of all N
// set of Inch Feet distances
void findSum(struct InchFeet arr[], int N)
{
	// Variable to store sum
	int feet_sum = 0;
	float inch_sum = 0.0;

	int x;

	// Traverse the InchFeet array
	for (int i = 0; i < N; i++) {
		// Find the total sum of
		// feet and inch
		feet_sum += arr[i].feet;
		inch_sum += arr[i].inch;
	}

	// If inch sum is greater than 11
	// convert it into feet
	// as 1 feet = 12 inch
	if (inch_sum >= 12) {
		// Find integral part of inch_sum
		x = (int)inch_sum;

		// Delete the integral part x
		inch_sum -= x;

		// Add x%12 to inch_sum
		inch_sum += x % 12;

		// Add x/12 to feet_sum
		feet_sum += x / 12;
	}

	// Print the corresponding sum of
	// feet_sum and inch_sum
	printf("Feet Sum: %d", feet_sum);
	printf("Inch Sum: %.2f", inch_sum);
}

// Driver Code
int main()
{
	// Given set of inch-feet
	struct InchFeet arr[]
		= { { 10, 3.7 }, { 10, 5.5 }, { 6, 8.0 } };

	int N = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	findSum(arr, N);

	return 0;
}

