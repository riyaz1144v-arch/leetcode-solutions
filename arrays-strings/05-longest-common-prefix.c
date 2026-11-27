
#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int n)
{
    int i, j;

    if (n == 0)
    {
        printf("Longest Common Prefix: \"\"\n");
        return;
    }

    for (i = 0; strs[0][i] != '\0'; i++)
    {
        char current = strs[0][i];

        for (j = 1; j < n; j++)
        {
            if (strs[j][i] != current)
            {
                break;
            }
        }

        if (j < n)
        {
            break;
        }
    }

    printf("Longest Common Prefix: %.*s\n", i, strs[0]);
}

int main()
{
    char words1[3][100] = {"flower", "flow", "flight"};

    printf("Test Case 1:\n");
    longestCommonPrefix(words1, 3);

    char words2[3][100] = {"dog", "racecar", "car"};

    printf("\nTest Case 2:\n");
    longestCommonPrefix(words2, 3);

    return 0;
}
