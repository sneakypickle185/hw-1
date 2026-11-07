#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->_maxSize = size;
	q->_elements = new unsigned int[size];
	q->_front = 0;
	q->_back = -1;
	q->_count = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->_elements;
	q->_front = 0;
	q->_back = -1;
	q->_count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		std::cout << "Queue is full" << std::endl;
		return;
	}

	q->_back = (q->_back + 1) % q->_maxSize;
	q->_elements[q->_back] = newValue;
	q->_count++;
}

int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		std::cout << "Queue is empty" << std::endl;
		return -1;
	}
	
	unsigned int value = q->_elements[q->_front];
	q->_front = (q->_front + 1) % q->_maxSize;
	q->_count--;
	return value;
}

bool isEmpty(Queue* s)
{
	if (!s->_count)
		return true;
	return false;
}

bool isFull(Queue* s)
{
	if (s->_count >= s->_maxSize)
		return true;
	return false;
}