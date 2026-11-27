
#include <stdio.h>
#include <string.h>

void reverseString(char s[], int size)
{
    int left = 0;
    int right = size - 1;

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
    char str1[] = "hello";
    int size1 = strlen(str1);

    printf("Test Case 1:\n");
    reverseString(str1, size1);
    printf("Reversed string: %s\n", str1);

    char str2[] = "a";
    int size2 = strlen(str2);

    printf("\nTest Case 2:\n");
    reverseString(str2, size2);
    printf("Reversed string: %s\n", str2);

    return 0;
}
