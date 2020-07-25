#include "List.h"

List::List() : head(NULL), median(0.0) {};

void List::findMedian()
{
    Node* slow_ptr = head;
    Node* fast_ptr = head;
    Node* pre_of_slow = head;

    if (head != NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL) {

            fast_ptr = fast_ptr->next->next;

            pre_of_slow = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        if (fast_ptr != NULL)
            median = slow_ptr->data;
        else
            median = float(slow_ptr->data + pre_of_slow->data) / 2.0;
    }
}

void List::push(int value)
{
    Node* temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
}

float List::getMedian() { return median; }