//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while(fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}

