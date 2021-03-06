class Solution {
public:
   bool isPalindrome(ListNode* head) {
         ListNode *temp = head;
         stack<int> st;
         while(temp) {
             st.push(temp->val);
             temp = temp->next;
         }
         temp = head;
         while(!st.empty() && temp) {
             if(temp->val!=st.top()) return false;
             st.pop();
             temp = temp->next;
         }
         return true;
    }
};
