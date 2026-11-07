#ifndef QUEUE_H
#define QUEUE_H

/* a queue contains positive integer values. */
struct Queue
{
	unsigned int* _elements;
	int _maxSize;
	int _front;
	int _back;
	int _count;
}; typedef struct Queue
Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */