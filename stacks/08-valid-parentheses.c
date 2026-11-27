#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push an opening bracket
void push(char ch)
{
    if (top < MAX - 1)
    {
        stack[++top] = ch;
    }
}

// Pop an opening bracket
char pop()
{
    if (top == -1)
    {
        return '\0';
    }

    return stack[top--];
}

// Check whether brackets are valid
int isValid(char str[])
{
    top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else
        {
            if (top == -1)
            {
                return 0;
            }

            char opening = pop();

            if ((ch == ')' && opening != '(') ||
                (ch == '}' && opening != '{') ||
                (ch == ']' && opening != '['))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    char test1[] = "()[]{}";
    char test2[] = "([)]";

    printf("Test Case 1:\n");
    printf("Input: %s\n", test1);
    printf("Valid: %s\n", isValid(test1) ? "True" : "False");

    printf("\nTest Case 2:\n");
    printf("Input: %s\n", test2);
    printf("Valid: %s\n", isValid(test2) ? "True" : "False");

    return 0;
}