#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;

    Node(int value)
    {
        this->value = value;
        Next = NULL;
    }
};
void insertAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
void insertAtHead(Node* &head,int val)
{
    //step 1:newNode creation
    Node *newNode = new Node(val);
    //step 2: update of newNode next
    newNode->Next = head;
    //step 3: update of head
    head = newNode;
}
void display(Node *n)
{
    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL) cout<<" -> ";
        n = n->Next;
    }
}
int main()
{
    Node *head = NULL;
    int n;
    cout<<"Choice 1 : Insertion of head"<<endl<<"Choice 2 : Insertion of tail"<<endl<<"Exit:"<<endl<<endl;
    int choice = 2;
    while(choice == 1 || choice == 2)
    {
        cout<<"Enter your value : ";
        cin>>n;
        if(choice == 1) insertAtHead(head,n);
        else if(choice == 2) insertAtTail(head,n);
        cout<<"Next Choice : ";
        cin>>choice;
    }
//    Node *second = new Node();
//    Node *third = new Node();
//    Node *fourth = new Node();
//    Node *five = new Node();

//    head->value = 1;
//    second->value = 3;
//    third->value = 5;
//    fourth->value = 7;
//    five->value = 9;
//
//    head->Next = second;
//    second->Next = third;
//    third->Next = fourth;
//    fourth->Next = five;
//    five->Next = NULL;

    display(head);

    return 0;
}
