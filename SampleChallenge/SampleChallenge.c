//
//  File            : SampleChallenge.c
//  Description     : This program finds the array index of an input value
//
//  Author          : Nicholas Krzenski
//  Last Modified   : 
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_index(int* ar, int size, int value);

// main function
int main() {

    int val;
    int V, n, i;
    scanf("%d", &V);    // Read in desired value
    scanf("%d", &n);    // Read in size of array
    int ar[n];

    // Fill up array
    for(i = 0; i < n; i++) {
        int item;
        scanf("%d", &item);
        ar[i] = item;
    }
    val = find_index(ar, n, V);
    if(val == -1) {
        printf("Sorry, the input is not in the array.\n");
    } else { printf("%d\n", val); }

    return 0;
}

//
//  Function        : find_index
//  Description     : find index in the array of the input value
//
//  Inputs          : ar - pointer to the beginning of an array
//                    size - size of the array
//                    value - value to search the array for
//  Outputs         : -1 if value is not in array or index i of
//                    where the value was found
int find_index(int* ar, int size, int value) {
    int i;
    for(i = 0; i < size; i++) {
        if( ar[i] == value) {
            return i;
        }
    }
    return -1;
}
