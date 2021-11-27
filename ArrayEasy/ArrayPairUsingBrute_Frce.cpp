#include <bits/stdc++.h>
using namespace std;
void findpair(int nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("pair found (%d, %d)\n", nums[i], nums[j]);
                return;
            }
        }
    }
    printf("Pair not fond");
}

int main()
{
    int nums[] = {8, 7, 2, 5, 3, 1};
    int target = 10;
    int n = sizeof(nums) / sizeof(nums[0]);
    findpair(nums, n, target);
    return 0;
}