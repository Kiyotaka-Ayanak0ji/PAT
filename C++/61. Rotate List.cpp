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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* ref = head;
        int l = 0;

        while(ref){
            l++;
            ref = ref->next;
        }
        if(k == l || k%l == 0){
            return head;
        }

        if(k > l){
            k = k%l;
        }

        //Move right l-k-1 times and then 
        //add the remaining part to the front of the linked list...
        int run = (l-k)-1;
        
        ref = head;
        ListNode* curr = head;
        ListNode* start = curr;
        
        while(run--){
            curr = curr->next;
        }
        if(curr->next == NULL){
            return head;
        }
        ListNode* part = curr->next;
        ref = part;
        curr->next = NULL;

        while(part->next != NULL){
            part = part->next;
        }

        part->next = start;
        return ref;
    }
};