struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

int findLength(Node *slow, Node *fast)
{
    // count to keep track of
    // nodes encountered in loop
    int cnt = 1;

    // move fast by one step
    fast = fast->next;

    // traverse fast till it
    // reaches back to slow
    while (slow != fast)
    {
        // at each node increase
        // count by 1 and move fast
        // forward by one step
        cnt++;
        fast = fast->next;
    }
}

int countNodesinLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    int count = 0;

    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return findLength(slow, fast);
        }
    }
    return 0;
}