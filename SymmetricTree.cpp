#include <iostream>
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
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;

        return sym(root->left, root->right);
    }

private:
    bool sym(TreeNode *left, TreeNode *right)
    {
        if (left == nullptr && right == nullptr)
            return true;
        if (left == nullptr && right != nullptr)
            return false;
        if (left != nullptr && right == nullptr)
            return false;
        if (left->val != right->val)
            return false;
        return sym(left->left, right->right) && sym(left->right, right->left);
    }
};

int main()
{

    // Symmetric Binary Tree exapmple
    TreeNode *node = new TreeNode(5);
    node->left = new TreeNode(6);
    node->right = new TreeNode(6);
    node->left->left = new TreeNode(7);
    node->left->right = new TreeNode(3);
    node->right->left = new TreeNode(3);
    node->right->right = new TreeNode(7);

    Solution sol;
    cout << (sol.isSymmetric(node) ? "true" : "false") << endl;

    // Not Symmetric Binary Tree exapmple
    TreeNode *node1 = new TreeNode(5);
    node1->left = new TreeNode(6);
    node1->left->right = new TreeNode(3);
    node1->right = new TreeNode(6);
    node1->right->left = new TreeNode(3);
    node1->right->right = new TreeNode(7);

    Solution sol1;
    cout << (sol1.isSymmetric(node1) ? "true" : "false") << endl;
    return 0;
}