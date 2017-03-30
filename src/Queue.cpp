#include "../h/Queue.h"

Queue::Queue() {
    first = NULL;
    last = NULL;
}

void Queue::enqueue() {
    int time, duration;

    Order *temp = new Order;

    cout << "Enter Order time to enqueue: ";
    cin >> time;

    cout << "Enter Order duration to enqueue: ";
    cin >> duration;

    temp->time = time;
    temp->duration = duration;

    temp->next = NULL;

    if (last == NULL) {
        last = temp;
    } else {
        first->next = temp;
    }

    first = temp;
}

Order* Queue::dequeue() {
    Order *order;

    if (last == NULL) {
        return NULL;
    } else {
        order = last;
        last = last->next;
        return order;
    }
}

void Queue::display() {
    Order *p;
    p = last;
    int count =0;
    if (last == NULL) {
        cout << "\nNothing to Display\n";
    } else {
        while (p != NULL) {
            count++;
            cout << count << ": ";
            cout << "Time: " << p->time << " Duration: " << p->duration << endl;
            p = p->next;
        }
    }
}
