#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* reverseList(ListNode* head) {
    stack<int> st;
    ListNode* temp = head;
    while (temp != nullptr)
    {
        st.push(temp->val);
        temp = temp->next;
    }
    temp = head;
    while (temp != nullptr)
    {
        temp->val = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

int main(){
}