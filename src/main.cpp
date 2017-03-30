#include "../h/Queue.h"

using namespace std;

int main() {
    Queue queue;
    int numberOfOrders, closingTime;
    cout << "Set number of orders: ";
    cin >> numberOfOrders;

    cout << "Set closing time: ";
    cin >> closingTime;

    for (int i = 0; i < numberOfOrders; ++i) {
        queue.enqueue();
    }
    queue.display();

    int idleTimeStart = 0, idleTimeEnd = 0, lastOrderFinishTime = 0, maxOrderTime = 0;
    int orderCount = 1;

    Order* order = queue.dequeue();

    while (order != NULL) {

        if (order->duration > maxOrderTime)
            maxOrderTime = order->duration;

        if (lastOrderFinishTime < order->time) {
            idleTimeStart = lastOrderFinishTime;
            idleTimeEnd = order->time;

            cout << "The chef takes a break (the queue is empty) between the times "
                 << idleTimeStart << " and " << idleTimeEnd << endl;

            lastOrderFinishTime = order->time + order->duration;
        }
        else {
            lastOrderFinishTime += order->duration;
        }

        cout << "Order " << orderCount << ": expected completion time = "
             << order->time + order->duration << ", actual completion time = " << lastOrderFinishTime << endl;

        delete order;

        order = queue.dequeue();
        orderCount++;
    }

    cout << "Max order time is: " << maxOrderTime << endl;

    if (lastOrderFinishTime > closingTime) {
        cout << "We have T = " << closingTime
             << ". After computing the orders, we find out that the last one will be finished at closingTime="
             << lastOrderFinishTime
             << ". Therefore, we have orders which are completed after the closing of the restaurant." << endl;
    }

    return 0;
}