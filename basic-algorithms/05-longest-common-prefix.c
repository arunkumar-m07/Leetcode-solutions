#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize)
{
    static char result[101];

    if (strsSize == 0)
    {
        result[0] = '\0';
        return result;
    }

    int index = 0;

    while (strs[0][index] != '\0')
    {
        char current = strs[0][index];

        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][index] != current ||
                strs[i][index] == '\0')
            {
                result[index] = '\0';
                return result;
            }
        }

        result[index] = current;
        index++;
    }

    result[index] = '\0';

    return result;
}

int main()
{
    char *strs1[] = {"flower", "flow", "flight"};

    printf("Test Case 1: %s\n",
           longestCommonPrefix(strs1, 3));

    char *strs2[] = {"dog", "racecar", "car"};

    printf("Test Case 2: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}