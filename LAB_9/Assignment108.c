#include <stdio.h>

// A. Copy one string into another
void copy(char* source, char* destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; 
}

// B. Compare two strings
int compare(char* str1, char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 > *str2) ? 1 : -1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        return 0; 
    }
    return (*str1 == '\0') ? -1 : 1; 
}

// C. Concatenate two strings
void concat(char* str1, char* str2) {
    while (*str1 != '\0') {
        str1++; 
    }
    while (*str2 != '\0') {
        *str1 = *str2; 
        str1++;
        str2++;
    }
    *str1 = '\0'; 
}

// D. Reverse a given string
void reverse(char* str) {
    char* end = str;
    char temp;
    while (*end != '\0') {
        end++; 
    }
    end--;

    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str1[100], str2[100], str3[100];

    // A. Copy one string into another
    printf("Enter string to copy: ");
    scanf("%s", str1);
    copy(str1, str2);
    printf("Copied string: %s\n", str2);

    // B. Compare two strings
    printf("Enter the first : ");
    scanf("%s", str1);
    printf("Enter the second : ");
    scanf("%s", str2);
    int cmpResult = compare(str1, str2);
    if (cmpResult == 0) {
        printf("Strings are equal.\n");
    } else if (cmpResult > 0) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    // C. Concatenate two strings
    printf("Enter the first string for concatenation: ");
    scanf("%s", str1);
    printf("Enter the second string for concatenation: ");
    scanf("%s", str2);
    copy(str1, str3);
    concat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // D. Reverse a given string
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    reverse(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}


