

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
  
    Node* newNode = new Node();
   
    newNode->data = new_data;
    
    newNode->next = (*head_ref);

    (*head_ref) = newNode;
}

int Count(Node* head)
{
    int count = 0; 
    Node* current = head; 
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Node* head = NULL;
    int size, dataOne;
    cin >> size;
    for (size_t i = 0; i < size; i++)
    {
        cin >> dataOne;
        push(&head, dataOne);
    }
    cout << "count of nodes is " << Count(head);
    return 0;
}
