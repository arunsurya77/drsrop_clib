#include <stdio.h>

void quick_sort (int* arr, int xlim, int ylim, int zlim ) {
    int i, j, k;
    int l=0;
    for (i = 0; i<xlim; i++) {
		for (j = 0; j<ylim; j++) {
			for (k = 0; k<zlim; k++) {
				printf("%d",arr[l]);
				l++;
			}
		}
	}

}
