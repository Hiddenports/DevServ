#include "basic.h"
#include "neuronet.h"
int isint(char *buffer) {
	if((atoi(buffer) != 0) && (atoi(buffer) != 1))
     	return 1;
	else
		return 0;
}
int main(int argc, char *argv[]) {
	struct neuronal_cell i1, i2, i3, i4, o1;
	int retval;
	/* initialize*/
	printf("Working with four input values...\n");
	if(argc != 17) { /* If user didn't define input values in the command line arguments */
		err("You must define the neuronal inputs");
	} else { /* If input values are defined in the command line arguments */
		printf("Taking from arguments...\n");
		if(isint(argv[1]))
			err("Argument 1 is invalid");
		i1.bit[0] = atoi(argv[1]);
		if(isint(argv[2]))
			err("Argument 2 is invalid");
		i1.bit[1] = atoi(argv[2]);
		if(isint(argv[3]))
			err("Argument 3 is invalid");
		i1.bit[2] = atoi(argv[3]);
		if(isint(argv[4]))
			err("Argument 4 is invalid");
		i1.bit[3] = atoi(argv[4]);
		if(isint(argv[5]))
			err("Argument 5 is invalid");
		i2.bit[0] = atoi(argv[5]);
		if(isint(argv[6]))
			err("Argument 6 is invalid");
		i2.bit[1] = atoi(argv[6]);
		if(isint(argv[7]))
			err("Argument 7 is invalid");
		i2.bit[2] = atoi(argv[7]);
		if(isint(argv[8]))
			err("Argument 8 is invalid");
		i2.bit[3] = atoi(argv[8]);
		if(isint(argv[9]))
			err("Argument 9 is invalid");
		i3.bit[0] = atoi(argv[9]);
		if(isint(argv[10]))
			err("Argument 10 is invalid");
		i3.bit[1] = atoi(argv[10]);
		if(isint(argv[11]))
			err("Argument 11 is invalid");
		i3.bit[2] = atoi(argv[11]);
		if(isint(argv[12]))
			err("Argument 12 is invalid");
		i3.bit[3] = atoi(argv[12]);
		if(isint(argv[13]))
			err("Argument 13 is invalid");
		i4.bit[0] = atoi(argv[13]);
		if(isint(argv[14]))
			err("Argument 14 is invalid");
		i4.bit[1] = atoi(argv[14]);
		if(isint(argv[15]))
			err("Argument 15 is invalid");
		i4.bit[2] = atoi(argv[15]);
		if(isint(argv[16]))
			err("Argument 16 is invalid");
		i4.bit[3] = atoi(argv[16]);
	}
	/* calculate */
	printf("Calculating...\n");
	o1 = cell_get(i1, i2, i3, i4, 3);
	retval = cell_update(o1, 3);
	printf("Network returned %d\n", retval);
	return retval;
}
