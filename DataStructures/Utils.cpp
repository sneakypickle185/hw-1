#include "Utils.h"
#include "Stack.h"

#include <iostream>

void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);

	for (unsigned int i = 0; i < size; i++)
		push(s, nums[i]);

	for (unsigned int i = 0; i < size; i++)
		nums[i] = pop(s);

	cleanStack(s);
}

int* reverse10()
{
	int* nums = new int[10];

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Enter number " << i + 1 << ": ";
		std::cin >> nums[i];
	}

	reverse(nums, 10);

	return nums;
}
