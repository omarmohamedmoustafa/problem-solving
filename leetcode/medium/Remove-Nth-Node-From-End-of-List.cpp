/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *Del_temp = head;
        ListNode *last = head->next;
        ListNode *preDel = NULL;
        ListNode *temp = head;
        int counter = 0;
        while (temp)
        {
            counter++;
            temp = temp->next;
        }
        if (counter == n)
        {
            head = head->next;
            return head;
        }
        for (int i = 0; i < counter - n; ++i)
        {

            preDel = Del_temp;
            Del_temp = Del_temp->next;
            last = last->next;
        }
        preDel->next = last;
        delete Del_temp;
        Del_temp = NULL;
        return head;
    }
};