#include <stdio.h>
#include <string.h>

void reverseString(char s[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str1[] = "hello";

    reverseString(str1, strlen(str1));

    printf("Test Case 1: %s\n", str1);

    char str2[] = "a";

    reverseString(str2, strlen(str2));

    printf("Test Case 2: %s\n", str2);

    return 0;
}