#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
{
	unsigned int _value;
	struct Node* _next;
}; typedef struct Node Node;

void addNode(Node** head, unsigned int value);
int removeNode(Node** head);
int listSize(Node* head);
void cleanList(Node** head);

#endif /* LINKEDLIST_H */