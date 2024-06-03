#include <stdio.h>

int main() {
    // Create an array of integers
    int my_array[] = {10, 20, 5, 30, 15};
    int n = sizeof(my_array) / sizeof(my_array[0]); // Calculate the number of elements in the array

    // Initialize the variable to store the smallest element
    int smallest = my_array[0];

    // Iterate through the array to find the smallest element
    for (int i = 1; i < n; i++) {
        if (my_array[i] < smallest) {
            smallest = my_array[i]; // Update the smallest element
        }
    }

    // Print the smallest element
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}

