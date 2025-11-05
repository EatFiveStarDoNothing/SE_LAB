/* Write a Program in c on Stack operations (PUSH, POP, display) */

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Function to push element into stack
void push(int item) {
    if (top == SIZE - 1)
        printf("Stack Overflow! Cannot push %d.\n", item);
    else {
        top++;
        stack[top] = item;
        printf("%d pushed onto the stack.\n", item);
    }
}

// Function to pop element from stack
void pop() {
    if (top == -1)
        printf("Stack Underflow! Stack is empty.\n");
    else {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}

// Function to display stack elements
void display() {
    if (top == -1)
        printf("Stack is empty.\n");
    else {
        printf("Stack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    do {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to PUSH: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
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
