/* Write a Program in c on Sequential Searching technique */

#include <stdio.h>
#include <string.h>

#define SIZE 5

// Sequential Search
int sequentialSearch(char contacts[SIZE][20], char name[]) {
    int i;
    for (i = 0; i < SIZE; i++) {
        if (strcmp(contacts[i], name) == 0) {
            return i; // found
        }
    }
    return -1; // not found
}

int main() {
    // Contact list (can be in any order)
    char contacts[SIZE][20] = {"Zoya", "Kiran", "Amit", "Ravi", "Deepa"};
    char name[20];
    int position;

    printf("Enter the name to search: ");
    scanf("%s", name);

    position = sequentialSearch(contacts, name);

    if (position != -1)
        printf("Contact '%s' found at position %d.\n", name, position + 1);
    else
        printf("Contact '%s' not found.\n", name);

    return 0;
}
