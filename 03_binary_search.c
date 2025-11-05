/* Write a Program in c on Binary Searching technique */

#include <stdio.h>
#include <string.h>

#define SIZE 5

// Binary Search (list must be sorted)
int binarySearch(char contacts[SIZE][20], char name[]) {
    int low = 0, high = SIZE - 1, mid;
    int result;

    while (low <= high) {
        mid = (low + high) / 2;
        result = strcmp(name, contacts[mid]);

        if (result == 0)
            return mid; // found
        else if (result < 0)
            high = mid - 1; // search left half
        else
            low = mid + 1; // search right half
    }
    return -1; // not found
}

int main() {
    // Contact list (sorted alphabetically for binary search)
    char contacts[SIZE][20] = {"Amit", "Deepa", "Kiran", "Ravi", "Zoya"};
    char name[20];
    int position;

    printf("Enter the name to search: ");
    scanf("%s", name);

    position = binarySearch(contacts, name);

    if (position != -1)
        printf("Contact '%s' found at position %d.\n", name, position + 1);
    else
        printf("Contact '%s' not found.\n", name);

    return 0;
}
