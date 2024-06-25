#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_a_tell(Node *&head, int val)
{
    Node *new_Node = new Node(val);
    Node *temp = head;
    if(head == NULL)
    {
        head = new_Node;
        cout << endl << endl << "Insertet at Head" << endl << endl;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;

    }
    temp->next = new_Node;
    cout << endl << endl << "Insertet at Tail" << endl << endl;
}
void print_linked_list(Node *head)
{
    cout << endl << endl << "Your Elemen are: ";
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *head = NULL;
    cout << "Insert a Opption: " << endl;
    cout << endl;
     
    while(true)
    {
    int op;
    cout << "1 Insert a element: " << endl;
    cout << "2 print:" << endl;
    cout << "3 Tirmninate:" << endl;
    cin >> op;
    if(op == 1)
    {
        cout << "Inster a Value: ";
        int v;
        cin >> v;
        insert_a_tell(head, v);
    }
    else if(op == 2)
    {
        print_linked_list(head);    
    }
    else if(op == 3)
    {
        return 0;
    }
    }
    
    return 0;
}