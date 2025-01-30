#include <vector>
using std::vector;

int main(int c, char *v[])
{
  Solution s;
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {2, 5, 6};
  int n = 3;
  s.merge(nums1, m, nums2, n);
}

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    // m => size of nums1
    // n => size of nums2
    // last index of non-zero values in nums1
    int i = m - 1;
    // last index of nums2
    int j = n - 1;
    // last index of nums1 (target cell)
    int k = m + n - 1;

    // for every j, the indexes of nums2
    while (j >= 0)
    {
      // if there are still nums1
      // and current nums1 > current nums2
      if (i >= 0 && nums1[i] > nums2[j])
      {
        // set the value at k, the target cell to current nums1
        // and decrement target cell and current nums1
        nums1[k--] = nums1[i--];
      }
      else
      {
        // else set target cell to current nums2
        // and decrement target cell and current nums2
        nums1[k--] = nums2[j--];
      }
    }
  }
};