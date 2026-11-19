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
//leek11-1.cpp 厩策璸礶 linked list 材2肈
//leetcode 206. Reverse Linked List
// 渺挡﹃,惠璶2ㄣ腊Γ (1)ListNode *ans=new ListNode(999);
//(2) 或рlinked list场ǐΩ
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;//罽皚,璶рlinked listxu3ru042k7562kl45p4ux,4
        while (head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode *ans=new ListNode(999);
        ListNode *now=ans;
        for(int i=a.size()-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;

        //ListNode *now=head;//(2)场ǐΩ
        //while(now!=nullptr){//(2) 场ǐΩ ノwhileǐ
        //    cout<<now->val<<" "; //val
        //    now=now->next;//传
        //}
        //ListNode *ans=new ListNode(999); //(1)厩策或рlinked listnode非称
        //return ans;
    }
};
