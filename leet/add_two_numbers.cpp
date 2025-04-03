#include <iostream>
#include <cmath>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int calcNumber(ListNode *l)
{
    int num = 0;
    int count = 0;
    while (l->next != nullptr)
    {
        num += l->val * pow(10, count);
        count++;
    }
    return num;
}

ListNode *constructLinkedList(int x)
{
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int num1, num2 = 0;
    num1 = calcNumber(l1);
    num2 = calcNumber(l2);
}

int main()
{

    return 0;
}