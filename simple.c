#include "basic.h"
/* Header Information:
 * struct neuronal_cell
 * function neuron(bit1, bit2, level)
 * functions:
 * cell_input(cell, value, index) returns value
 * cell_update(cell, level) returns output
 * cell_get(c1, c2, level) returns neuronal_cell from cell_update of c1 and c2
*/
void sgets(char *buffer) {
	memset(buffer, '\0', sizeof(buffer));
	fgets(buffer, sizeof(buffer), stdin);
}
void err(char mesg[100]) {
	printf("[ERROR] %s\n", mesg);
	exit(10);
}
int isint(char *buffer) {
	if(atoi(buffer) == NULL)
		return 1;
	else
		return 0;
}
int main(void) {
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
}