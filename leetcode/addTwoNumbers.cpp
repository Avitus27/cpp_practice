#include <iostream>

class Solution
{
public:
    // Definition for singly-linked list.
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *tail = new ListNode(0);
        ListNode *head = tail;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int val1 = l1 == nullptr ? 0 : l1->val;
            int val2 = l2 == nullptr ? 0 : l2->val;

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            sum = sum % 10;

            tail->val = sum;
            ListNode* next = new ListNode(0);
            tail->next = next;
            tail = next;
            l1 = l1 == nullptr ? nullptr : l1->next;
            l2 = l2 == nullptr ? nullptr : l2->next;
        }
        return head;
    }
};

int main(){
    Solution s;
    Solution::ListNode *ln;
    // Solution::ListNode *ln1 = new Solution::ListNode(9);
    // Solution::ListNode *ln2 = new Solution::ListNode(8);
    Solution::ListNode *ln1 = new Solution::ListNode(9, new Solution::ListNode(9));
    Solution::ListNode *ln2 = new Solution::ListNode(8, new Solution::ListNode(9));
    ln = s.addTwoNumbers(ln1, ln2);

    while (ln->next != nullptr){
        std::cout << ln->val;
        ln = ln->next;
    }
}