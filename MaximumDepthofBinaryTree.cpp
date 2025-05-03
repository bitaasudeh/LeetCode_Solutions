#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int Lhight = maxDepth(root->left);
        int Rhight = maxDepth(root->right);
        return max(Lhight, Rhight) + 1;
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->right = new TreeNode(5);
    root->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right->left = new TreeNode(1);
    Solution sol;
    cout << sol.maxDepth(root);
    return 0;
}