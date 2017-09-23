#include "basic.h"
#include "neuron.h"
/* Header Information:
 * struct neuronal_cell
 * function neuron(bit1, bit2, level)
 * functions:
 * cell_input(cell, value, index) returns value
 * cell_update(cell, level) returns output
 * cell_get(c1, c2, level) returns neuronal_cell from cell_update of c1 and c2
*/
int isint(char *buffer) {
	if((atoi(buffer) != 0) && (atoi(buffer) != 1))
     	return 1;
	else
		return 0;
}
int main(int argc, char *argv[]) {
	struct neuronal_cell i1, i2, o1;
	char *buffer;
	/* initialize */
	printf("Initializing...\n");
	if((buffer = malloc(1024)) == NULL) {
		err("Memory allocation error");
	}
	printf("Initialized.\n");
	/* get value */
	printf("Working with four input values...\n");
	if(argc != 5) { /* If user didn't define input values in the command line arguments */
	inp1:
	printf("INPUT 1: ");
	sgets(buffer);
	if(isint(buffer)) /* Ask again if the input is invalid */
		goto inp1;
	i1.bit1 = atoi(buffer);
	inp2:
	printf("INPUT 2: ");
	sgets(buffer);
	if(isint(buffer))
		goto inp2;
	i1.bit2 = atoi(buffer);
	inp3:
	printf("INPUT 3: ");
	sgets(buffer);
	if(isint(buffer))
		goto inp3;
	i2.bit1 = atoi(buffer);
	inp4:
	printf("INPUT 4: ");
	sgets(buffer);
	if(isint(buffer))
		goto inp4;
	i2.bit2 = atoi(buffer);
	} else { /* If input values are defined in the command line arguments */
		printf("Taking from arguments...\n");
		if(isint(argv[1]))
			err("Argument 1 is invalid");
		i1.bit1 = atoi(argv[1]);
		if(isint(argv[2]))
			err("Argument 2 is invalid");
		i1.bit2 = atoi(argv[2]);
		if(isint(argv[3]))
			err("Argument 3 is invalid");
		i2.bit1 = atoi(argv[3]);
		if(isint(argv[4]))
			err("Argument 4 is invalid");
		i2.bit2 = atoi(argv[4]);
	}
	printf("Input values:\nFirst:  %d\nSecond: %d\nThird:  %d\nFourth: %d\n", i1.bit1, i1.bit2, i2.bit1, i2.bit2);
	/* calculate */
	printf("Calculating...\n");
	o1 = cell_get(i1, i2, 1);
	printf("Network returned %d in mode 1\n", cell_update(o1, 1));
	printf("Network returned %d in mode 2\n", cell_update(o1, 2));
	return 0;
}
