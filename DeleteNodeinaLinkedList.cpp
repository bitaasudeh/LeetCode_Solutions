#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};

int main()
{
    // example usage
    ListNode *head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    Solution sol;
    sol.deleteNode(head->next);

    ListNode *current = head;
    while (current)
    {
        cout << current->val << " ";
        current = current->next;
    }

    // clean up memorry
    while (head)
    {
        ListNode *next = head->next;
        delete head;
        head = next;
    }
    return 0;
}