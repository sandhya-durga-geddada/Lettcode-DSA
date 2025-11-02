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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int> mp;
        for(int n : nums) mp[n]++;

        ListNode* res = new ListNode(-1);
        ListNode* temp = res;
        while(head){
            if(mp.find(head->val)==mp.end()){
                temp->next = new ListNode(head->val);
                temp = temp->next;
    
            }
            head = head->next;
        }
        
        return res->next;
    }
};