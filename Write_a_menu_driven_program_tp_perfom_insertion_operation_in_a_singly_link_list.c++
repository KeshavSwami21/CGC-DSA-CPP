// Write a menu driven program to perform insertion operation in a singly link list:
// 1. at teh beginning
// 2. at the end
// 3. after a given node
// 4. Traversing a link list

#include <iostream>
using namespace std;

// Creating Linked list node
struct node
{
    int data;

    node *next;
};

node *head, *newnode, *temp;

// for creating list with n nodes
void iList()
{
    newnode = new node();

    cout << "\n Enter data: ";
    cin >> newnode->data;

    newnode->next = NULL;

    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void pList(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void dList()
{
    if(head == NULL)
    {
        cout<<"\nList is empty";
    }
    else
    {
        temp = head;

        head = head -> next;

        free(temp);
    }
}

void s