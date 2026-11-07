#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	addNode(&s->_head, element);
}

int pop(Stack* s)
{
	return removeNode(&s->_head);
}

void initStack(Stack* s)
{
	s->_head = nullptr;
}

void cleanStack(Stack* s)
{
	cleanList(&s->_head);
}

bool isEmpty(Stack* s)
{
	if (!s->_head)
		return true;
	return false;
}

bool isFull(Stack* s)
{
	return false;
}