#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char *str, int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;

    while (*str != '\0') {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
        str++;
    }
}

int main() {
    char str[100];
    int vowelCount, consonantCount;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowelsAndConsonants(str, &vowelCount, &consonantCount);

    // Output the result
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}
