
/*-----------------------------------------------------------------------------
 * Includes
 *---------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

float* uptheramp (int* arr, int* time, int xlim, int ylim, int zlim ) {
    
    /* Local Variables */
     
    int i, j, k, nelem, sz;
    float *new_arr;
    double tisi=0;
    double ti=0;
    double si=0;
    double ti2=0;
    double a;
    double xymult;
    double x2;
    
    /* Elements  */
    nelem=ylim*zlim;
    
    /* Memory Allocation  */
    new_arr = (float*) malloc(nelem* sizeof(float));
        
    
    for (i = 0; i<nelem; i++) {
	tisi=0;
	ti=0;
	si=0;
	ti2=0;   
        for (j = 0; j<xlim; j++) {
	    
	    xymult=time[j]*arr[i+j*ylim*zlim];
	    x2=time[j]*time[j];
	    tisi=tisi+xymult;

	    ti=ti+time[j];
	    si=si+arr[i+j*ylim*zlim];
	    ti2=ti2+x2; 	    
	         
        }    
	/*a=(((ti2*si)-(ti*tisi))/((xlim*ti2)-(ti*ti)));*/
	a=(((xlim*(tisi)) - (ti*si)) / ((xlim*ti2)-(ti*ti))) * (time[xlim-1]-time[0]);
	new_arr[i]=a;  
    }           
    return new_arr;

}
