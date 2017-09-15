#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "neuron.h"
int main(int argc, char *argv[]) {
	char *buffer;
	void *temp;
	struct neuronal_cell neurocell;
	if((buffer = malloc(1024)) == NULL) {
		printf("ERROR: TEST-HEADER 1 - Memory allocation failure\n");
		exit(2);
	}
	if(NEURON_H_VERSION > 1) {
		printf("Newer version. Difference could cause errors. Continue?\n(yes/no) - ");
		fgets(buffer, 1024, stdin);
		if(strncmp(buffer, "yes", 3)) {
			printf("Sorry. If you want to update the software try:\n$ git clone https://github.com/Hiddenports/DevServ\n");
			exit(3);
		}
		printf("OK. Be warned: This could cause errors...\n");
	}
	else if(NEURON_H_VERSION != 1) {
		printf("Incompatible version. Difference could cause errors. Continue?\n(yes/no) - ");
		fgets(buffer, 1024, stdin);
		if(strncmp(buffer, "yes", 3)) {
			printf("Sorry. If you want to update the software try:\n$ git clone https://github.com/Hiddenports/DevServ\n");
			exit(3);
		}
		printf("OK. Be warned: This could cause errors...\n");
	}
	printf("Calling the header...\n");
	if(cell_input(neurocell, 1, 1) == 1) {
		printf("Updated an instance of the cell structure...\n");
	}
	else {
		printf("WARNING - Bad compilation. Please try to recompile the program...\n");
		exit(3);
	}
	if(cell_update(neurocell, 1) == 1) {
		printf("Calculated in a data cell...\n");
	}
	else {
		printf("WARNING - Bad compilation. Please try to recompile the program...\n");
		exit(3);
	}
	printf("Test ended successfully!");
	exit(0);
}