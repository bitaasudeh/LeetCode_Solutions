#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int size = nums.size();
        int i;
        if (size == 0 || k <= 0)
            return;

        k %= size;
        vector<int> temp(size);
        for (i = 0; i < size; i++)
        {
            temp[(i + k) % size] = nums[i];
        }
        nums = temp;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 3, 5, 7, 8, 2, 6};
    int k = 3;

    sol.rotate(arr, k);

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}