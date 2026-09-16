#include <stdio.h>
#include <string.h>

int isValid(char s[])
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    printf("Test Case 1: %s\n",
           isValid("()[]{}") ? "true" : "false");

    printf("Test Case 2: %s\n",
           isValid("(]") ? "true" : "false");

    return 0;
}