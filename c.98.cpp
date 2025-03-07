// A C Program to check if the given 
// string is a pangram or not 
#include <stdbool.h> 
#include <stdio.h> 
#include <string.h> 

// Returns true if the string is pangram else false 
bool checkPangram(char str[]) 
{ 
	// Create a hash table to mark the characters 
	// present in the string 
	bool mark[26]; 
	for (int i = 0; i < 26; i++) 
		mark[i] = false; 

	// For indexing in mark[] 
	int index; 

	// Traverse all characters 
	size_t size = strlen(str); 
	for (int i = 0; i < size; i++) { 

		// If uppercase character, subtract 'A' 
		// to find index. 
		if ('A' <= str[i] && str[i] <= 'Z') 
			index = str[i] - 'A'; 

		// If lowercase character, subtract 'a' 
		// to find index. 
		else if ('a' <= str[i] && str[i] <= 'z') 
			index = str[i] - 'a'; 

		// If this character is other than english 
		// lowercase and uppercase characters. 
		else
			continue; 

		mark[index] = true; 
	} 

	// Return false if any character is unmarked 
	for (int i = 0; i <= 25; i++) 
		if (mark[i] == false) 
			return (false); 

	// If all characters were present 
	return (true); 
} 

// Driver Program to test above functions 
int main() 
{ 
	char str[] 
		= "The quick brown fox jumps over the lazy dog"; 
	if (checkPangram(str) == true) 
	printf(" %s is a pangram", str); 
	else
		printf(" %s is not a pangram", str); 
	return (0); 
} 

// This code is contributed by Aditya kumar (adityakumar129)

