#include <stdio.h>

int large_rec(int array[], int marker, int larg){
    if (marker == 0){
        return larg;
    }
    else {
        if (array[marker] > larg){
            larg = array[marker];
        }
        return large_rec(array, marker-1, larg);
    }
}

int large(int array[], int size){
    int largest = array[0];
    largest = large_rec(array, size - 1, largest);
    return largest;
}

int main() {
    int array[] = {33, 12, 45, 9, 24};

    int n = 5;

    int largest_element = large(array, n);

    printf("The largest number of the list is: %d\n", largest_element);
}