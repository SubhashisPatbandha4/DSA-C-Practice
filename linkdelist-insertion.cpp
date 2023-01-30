#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    int insertAtHead(Node *&head, int data)
    {
        // create a node

        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    int insertAtTail(Node *&tail, int data)
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
    int insertAtPosition(Node *&head, int position, int data)
    {
        Node *temp = head;
        int count = 1;
        while (count < position - 1)
        {
            temp = temp->next;
            count++;
        }
        Node *nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
    void print(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    // insert at head--------------------------
    // cout << "insert at head" << endl
    //      << endl;
    // node1->print(head);

    // cout << endl;

    // node1->insertAtHead(head, 100);
    // node1->print(head);
    // cout << endl;
    // node1->insertAtHead(head, 1000);
    // node1->print(head);

    // // insert at tail=========
    cout << "insert at tail" << endl
         << endl;
    Node *tail = node1;
    node1->insertAtTail(tail, 20);
    node1->print(head);

    node1->insertAtTail(tail, 100);

    node1->print(head);
    node1->insertAtTail(tail, 1000);
    node1->print(head);

    // insert at position---------------------
    // cout << "insert at position" << endl
    //  << endl;
    // node1->insertAtPosition(head,2,9);
    // node1->print(head);

    return 0;
}