#include "../h/Queue.h"

using namespace std;

int main() {
    Queue queue;
    int choice;
    while (true) {
        cout << "\n1.Enqueue\n2. Dequeue\n3. Display\n 4.Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                queue.enqueue();
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "\nInvalid Input. Try again! \n";
                break;
        }
    }

    return 0;
}