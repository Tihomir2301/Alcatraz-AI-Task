#pragma once
#include "Node.h"

class List
{
public:
	List();
	void findMedian();
	void push(int new_data);
	float getMedian();
private:
	Node* head;
	float median;
};