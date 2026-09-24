#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    // Test Case 1 - Typical Case
    char s1[] = "hello";
    int n1 = strlen(s1);

    reverseString(s1, n1);

    printf("Test Case 1: %s\n", s1);

    // Test Case 2 - Edge Case
    char s2[] = "a";
    int n2 = strlen(s2);

    reverseString(s2, n2);

    printf("Test Case 2: %s\n", s2);

    return 0;
}