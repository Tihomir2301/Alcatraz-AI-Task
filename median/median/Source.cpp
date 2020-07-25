#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List linkedList;

    //Use push() to insert new elements
    (linkedList).push(8);
    (linkedList).push(7);
    (linkedList).push(6);
    (linkedList).push(5);
    (linkedList).push(4);
    (linkedList).push(3);
    (linkedList).push(2);
    (linkedList).push(1);

    (linkedList).findMedian();

    cout << (linkedList).getMedian();

	return 0;
}