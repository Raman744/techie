#include <bits/stdc++.h>
using namespace std;
void findPair(int nums[], int n, int target)
{
    sort(nums, nums + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (nums[low] + nums[high] > target)
        {
            high--;
        }
        if (nums[low] + nums[high] < target)
        {
            low--;
        }
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found "
                 << "(" << nums[low]
                 << "," << nums[high] << ")";
            low-- or high++;
        }
    }
}
int main()
{
    int nums[] = {8, 7, 2, 5, 3, 2};
    int target = 10;
    int n = sizeof(nums) / sizeof(nums[0]);
    findPair(nums, n, target);
    return 0;
}