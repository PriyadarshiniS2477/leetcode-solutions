#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize)
{
    static char prefix[201];

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0')
        {
            break;
        }
    }

    return prefix;
}

int main()
{
    // Test Case 1 - Typical Case
    char *strs1[] = {"flower", "flow", "flight"};
    int n1 = 3;

    printf("Test Case 1: %s\n",
           longestCommonPrefix(strs1, n1));

    // Test Case 2 - Edge Case
    char *strs2[] = {"dog", "racecar", "car"};
    int n2 = 3;

    printf("Test Case 2: %s\n",
           longestCommonPrefix(strs2, n2));

    return 0;
}