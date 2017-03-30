#ifndef STACKS_AND_QUEUES_QUEUE_H
#define STACKS_AND_QUEUES_QUEUE_H

#include <iostream>
#include "Order.h"

using namespace std;

class Queue {
    Order *first;
    Order *last;

public:
    Queue();
    void enqueue();
    Order * dequeue();
    void display();
};

#endif //STACKS_AND_QUEUES_QUEUE_H
