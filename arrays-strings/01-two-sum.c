#include <stdio.h>

void twoSum(int nums[], int numsSize, int target, int result[])
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

void printResult(int result[])
{
    printf("[%d, %d]\n", result[0], result[1]);
}

int main()
{
    int nums1[] = {2, 7, 11, 15};
    int result1[2];

    twoSum(nums1, 4, 9, result1);

    printf("Test Case 1: ");
    printResult(result1);

    int nums2[] = {3, 3};
    int result2[2];

    twoSum(nums2, 2, 6, result2);

    printf("Test Case 2: ");
    printResult(result2);

    return 0;
}