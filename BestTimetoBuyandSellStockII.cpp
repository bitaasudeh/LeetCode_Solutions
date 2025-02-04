#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int i, maxp = 0;
        if (prices.size() < 2)
            return 0;
        for (i = 0; i < prices.size() - 1; i++)
        {
            int delta = prices[i + 1] - prices[i];
            if (delta > 0)
                maxp += delta;
        }
        return maxp;
    }
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 6};
    Solution sol;
    cout << "Max Profit:  " << sol.maxProfit(prices) << endl;
}