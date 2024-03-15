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
typedef struct ListNode ListNode;
class Solution {
public:
    
    int gcd(int a , int b){
        if(a == 0) return b;
        return gcd(b%a,a);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* prev = head;

        while(prev->next){
            
            ListNode* temp = new ListNode(gcd(prev->val,prev->next->val));

            temp->next = prev->next;
            prev->next = temp;

            prev = temp->next;
        }

        return head;
    }
};