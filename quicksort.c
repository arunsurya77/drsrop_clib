#include <stdio.h>
#include <stdlib.h>
int* quick_sort (int* arr, int xlim, int ylim, int zlim ) {
    int i, j, k,nelem;
    int* new_arr;
    nelem=xlim*ylim*zlim;
    new_arr = (int *) malloc(nelem* sizeof(int));
    int l=0,m=0;
    for (i = 0; i<xlim; i++) {
		for (j = 0; j<ylim; j++) {
			for (k = 0; k<zlim; k++) {
				printf("%d",arr[l]);
				new_arr[l]=arr[l];
				l++;
			}
			m++;
		}
		
	}
	return arr;

}
