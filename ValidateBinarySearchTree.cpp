#include <iostream>
#include <limits>

using namespace std;

// Definition for a binary tree node.
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
    bool isValidBST(TreeNode *root)
    {
        return valid(root, LONG_MIN, LONG_MAX);
    }

private:
    bool valid(TreeNode *node, long low, long high)
    {
        if (node == nullptr)
            return true;

        if (node->val >= high || node->val <= low)
            return false;

        return valid(node->left, low, node->val) &&
               valid(node->right, node->val, high);
    }
};

int main()
{
    //Notvalid BST example
    TreeNode *node = new TreeNode(5);
    node->right = new TreeNode(6);
    node->right->right = new TreeNode(7);
    node->right->left = new TreeNode(3);
    node->left = new TreeNode(2);
    node->left->left = new TreeNode(1);

    Solution sol;
    cout << (sol.isValidBST(node) ? "true" : "false") << endl;
    
    //BST example
    TreeNode *node1 = new TreeNode(5);
    node1->right = new TreeNode(6);
    node1->right->right = new TreeNode(7);
    node1->left = new TreeNode(2);
    node1->left->left = new TreeNode(1);
    Solution sol1;
    cout << (sol1.isValidBST(node1) ? "true" : "false") << endl;
}
