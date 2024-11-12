#include<iostream>
#include<unordered_map>

using namespace std;

struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};
bool hasCycle(ListNode *head) {
    unordered_map<ListNode*,bool> umap;
    ListNode* temp = head;
    while (temp != nullptr)
    {
        if(umap[temp]){
            return true;
        }
        umap[temp] = true;
        temp = temp->next;
    }
    return false;    
    }

int main(){
}