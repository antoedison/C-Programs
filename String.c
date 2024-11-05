#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int count = 0; // Initialize the count variable

    // Read input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character in the string to check for vowels
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'A' || 
            str[i] == 'e' || str[i] == 'E' || 
            str[i] == 'i' || str[i] == 'I' || 
            str[i] == 'o' || str[i] == 'O' || 
            str[i] == 'u' || str[i] == 'U') {
            count++; // Increment the count if it's a vowel
        }
    }

    // Print the original string and the count of vowels
    printf("Original string: %s", str);
    printf("Number of vowels: %d\n", count);
    
    //length of the string without using length function
    int count_of_string = 0;
    for (int i=0;str[i]!='\0';i++){
        count_of_string++;
    }
    printf("Lenght: %d",count_of_string);
    
    

    return 0;
}
