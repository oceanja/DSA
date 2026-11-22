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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* newHead=reverseList(head->next); // reverseList(2)
        // reverseList(3)
        //reverseList(4)
        //reverseList(5)


        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;

        return newHead;

    }
};