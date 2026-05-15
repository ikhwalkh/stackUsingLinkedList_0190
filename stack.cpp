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