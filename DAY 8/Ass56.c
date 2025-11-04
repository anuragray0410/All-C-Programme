#include <stdio.h>
int main() 
//using c do the following without any library functions
//length of the string
//copy one string to another
//append on string to another
//compare one string to other
{
    char str1[100], str2[100];
    int i, len1 = 0, len2 = 0, flag = 1;

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate length of first string
    for(i = 0; str1[i] != '\0'; i++);
    len1 = i - 1; // Adjust for newline character

    // Calculate length of second string
    for(i = 0; str2[i] != '\0'; i++);
    len2 = i - 1; // Adjust for newline character

    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);

    // Copy first string to another
    char copyStr[100];
    for(i = 0; i <= len1; i++) {
        copyStr[i] = str1[i];
    }
    printf("Copied string: %s", copyStr);

    // Append second string to first
    char appendStr[200];
    for(i = 0; i < len1; i++) {
        appendStr[i] = str1[i];
    }
    for(i = 0; i <= len2; i++) {
        appendStr[len1 + i] = str2[i];
    }
    printf("Appended string: %s", appendStr);

    // Compare two strings
    for(i = 0; i < len1 && i < len2; i++) {
        if(str1[i] != str2[i]) {
            flag = 0;
            break;
        }
    }
    if(len1 != len2) {
        flag = 0;
    }

    if(flag)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
