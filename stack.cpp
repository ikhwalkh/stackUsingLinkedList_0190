#include <iostream>
using namespace std;

//node class representing a single node in the Linked list
class Node 
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// stack class
class Stack
{
    private:
    Node *top;

public:
     Stack()
{
    top = NULL;
}

int push(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Push value: " << value << endl;
    return value;
}


void pop()
{
    Node *temp = top;
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Popped value: " << temp->data << endl;
    top = temp->next;
    delete temp;
}


void peek()
{
    if (isEmpty())
    {
        cout << "List is empty." << endl;
    }
    else
    {
        Node *current = top;
        while (current != NULL)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
        cout << endl;
    } // Return the value of the top node
}

bool isEmpty()
{
    return top == NULL;
}
};