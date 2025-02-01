#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int k = 0; // Points to the position of the unique element
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[k] != nums[i])
            {
                k++;
                nums[k] = nums[i]; // Move the next unique element forward
            }
        }

        // New size of the array is `k + 1`
        return k + 1;
    }
};
