#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int nsize = nums.size(), i;
        if (nsize == 1)
            return nums[0];
        // XOR(^) is used for solving this question.
        //  a ^ a = 0 , a ^ 0 = a
        int result = 0;
        for (i = 0; i < nsize; i++)
            result = result ^ nums[i];
        return result;
    }
};
int main()
{
    vector<int> v = {1, 2, 3, 4, 1, 2, 4, 3, 6};
    Solution sol;
    cout << sol.singleNumber(v);
}