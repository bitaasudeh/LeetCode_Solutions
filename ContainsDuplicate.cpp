#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen; // Hash table to store seen numbers
        int sizeArr = nums.size();
        int i;
        for (i = 0; i < sizeArr; i++)
        {
            if (seen.find(nums[i]) != seen.end()) // If nums[i] is not found, find() returns seen.end(), which is an iterator representing the end of the set.
            {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    vector<int> v = {1, 4, 2, 7, 5, 5, 3, 8};
    Solution sol;
    cout << (sol.containsDuplicate(v) ? "true" : "false") << endl;
    return 0;
}

// output= true
// because of the presence of two equal number in vector v which is 5,5