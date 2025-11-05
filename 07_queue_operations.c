/* Write a Program in c on queue operations (Enqueue, Dequeue, Display) */

#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert (enqueue) an element into the queue
void enqueue(int item) {
    if (rear == SIZE - 1)
        printf("Queue Overflow! Cannot enqueue %d.\n", item);
    else {
        if (front == -1)
            front = 0; // first element
        rear++;
        queue[rear] = item;
        printf("%d enqueued into the queue.\n", item);
    }
}

// Function to delete (dequeue) an element from the queue
void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow! Queue is empty.\n");
    else {
        printf("%d dequeued from the queue.\n", queue[front]);
        front++;
    }
}

// Function to display the elements of the queue
void display() {
    if (front == -1 || front > rear)
        printf("Queue is empty.\n");
    else {
        printf("Queue elements (front to rear):\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    do {
        printf("\n--- Queue Operations Menu ---\n");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to ENQUEUE: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
