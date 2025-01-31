#include <vector>
#include <iostream>
using std::vector;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int len = nums.size();
        // Check edge cases
        if (len == 0)
            return 0;
        if (len == 1)
            return 1;
        
        // return/index value
        int j = 1;
        // for each value in the vector, from the second value
        for (int i = 1; i < len; i++)
        {
            // if a new number is found
            if (nums[i] != nums[i - 1])
            {
                // set the value at index j to the new number
                nums[j] = nums[i];
                // increment index
                j++;
            }
        }
        return j;
        //     int cnt = 1;
        //     int len = nums.size();
        //     if (len == 0)
        //         return 0;
        //     if (len == 1)
        //         return 1;
        //     int swaps = 0;
        //     for (int i = 0; i + swaps < len - 1; i++)
        //     {
        //         while (nums[i] == nums[i + 1])
        //         {
        //             shiftDown(nums, i + 1);
        //             swaps++;
        //         }
        //         cnt++;
        //     }
        //     return cnt;
    }

    // void shiftDown(vector<int> &nums, int index)
    // {
    //     for (int i = index; i < nums.size() - 1; i++)
    //     {
    //         std::swap(nums[i], nums[i + 1]);
    //     }
    // }
};

int main()
{
    Solution s;
    // Test cases:
    // std::vector<int> nums = {1, 1, 2};
    // std::vector<int> nums = {1, 1, 1, 2};
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    // std::vector<int> nums = {1, 1};
    // std::vector<int> nums = {};
    int res = s.removeDuplicates(nums);
    std::cout << "res:\t " << res << "\n";
    for (int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << ", ";
    }
}