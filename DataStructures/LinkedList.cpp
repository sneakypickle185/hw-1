#include "LinkedList.h"

// add a node
void addNode(Node** head, unsigned int value)
{
	Node* newNode = new Node;
	newNode->_value = value;
	newNode->_next = *head;
	*head = newNode;
}

// remove a node and return its value
int removeNode(Node** head)
{
	if (*head == nullptr)
		return -1;

	Node* oldHead = *head;
	int value = oldHead->_value;
	*head = oldHead->_next;
	delete oldHead;
	return value;
}

// return the size of the list
int listSize(Node* head)
{
	int count = 0;
	Node* current = head;
	while (current != nullptr)
	{
		count++;
		current = current->_next;
	}
	return count;
}

// free all nodes
void cleanList(Node** head)
{
	while (*head != nullptr)
		removeNode(head);
}