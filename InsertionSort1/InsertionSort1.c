// 
//  File            : InerstionSort1.c
//  Description     : This program take the last "unsorted" value
//                  in a "sorted" array and places it in the correct place
//
//  Author          : Nicholas Krzenski
//  Last Modified   :
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//Functional Prototypes
void insertionSort(int size, int * ar);

int main( void ) {
    int size;
    scanf("%d", &size);
    int ar[size], i;

    for(i=0; i<size; i++) {
        scanf("%d", &ar[i]);
    }
    insertionSort(size, ar);

    return 0;
}

//
//  Function    : insertionSort
//  Description : inserts a value into a sorted array such
//                that the array remains sorted
//
//  Inputs      : size - size of the array being passed
//                ar - the sorted array
//  Outputs     : none
void insertionSort(int size, int * ar) {
    int i, j;
    int V = ar[size-1];
    ar[size-1] = ar[size-2];

    for(i=size-1; i>=0; i--) {
        if( (i>0) && ((ar[i-1])>V) ) {
           ar[i] = ar[i-1];
        } else { ar[i] = V; i=0; }

        for(j=0; j<size; j++) {
            printf("%d ", ar[j]);
        }
        printf("\n");
    }
}
