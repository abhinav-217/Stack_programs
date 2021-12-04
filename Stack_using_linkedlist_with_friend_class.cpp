#include <bits/stdc++.h>
#include <fstream>

using namespace std;
class node
{
private:
    int data;
    node *next;
    node* end;

public:
    node(int val)
    {
        data = val;
        next = NULL;
    }

    friend class linked_list;
};

class linked_list
{
public:
    void push(node *&head, int x)
    {
        node *n = new node(x);
        node *temp = head;
        n->next = temp;
        head = n;
    }

    void display(node *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }

    void pop(node*&head)
    {
        node*temp = head;
        head = temp->next;
        delete temp;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node *head = NULL;
    linked_list l;
    l.push(head, 1);
    l.push(head, 2);
    l.push(head, 3);
    l.push(head, 4);
    l.push(head, 16);
    l.display(head);
    l.pop(head);
    l.display(head);
    return 0;
}