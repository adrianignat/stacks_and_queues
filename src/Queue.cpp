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

void Queue::dequeue() {
    Order *temp;

    if (last == NULL) {
        cout << "\nQueue is Emtpty\n";
    } else {
        temp = last;
        last = last->next;
        cout << "The Order time is " << temp->time << ". ";
        cout << "The Order duration is " << temp->duration << "." << endl;
        delete temp;
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
            cout << endl << count << ": ";
            cout << "Time: " << p->time << " Duration: " << p->duration;
            p = p->next;
        }
    }
}
