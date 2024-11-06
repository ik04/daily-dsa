#include<iostream>
using namespace std;

struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    int n = 0;
    ListNode* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
        n++;
    }
    int middleNum = n % 2 ? (n/2) + 1 : n/2;
    ListNode* middle = head;
    for (int i = 0; i <= middleNum; i++)
    {
        middle = middle->next;
    }
    return middle;
}


int main(){
}
