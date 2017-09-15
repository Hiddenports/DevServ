#ifndef NEURON_H_
#define NEURON_H_
#define NEURON_H_VERSION 1
int neuron(int bit1, int bit2, int level) {
	if(level == 1)
		return bit1 || bit2;
	if(level == 2)
		return bit1 && bit2;
	else
		return 0;
}
struct neuronal_cell {
	int bit1, bit2;
	int out;
};
int cell_update(struct neuronal_cell target, int level) {
	target.out = neuron(target.bit1, target.bit2, level);
	return target.out;
}
int cell_input(struct neuronal_cell target, int value, int index) {
	if(index == 1) {
		target.bit1 = value;
		return target.bit1;
	}
	if(index == 2) {
		target.bit2 = value;
		return target.bit2;
	}
	else {
		printf("ERROR: NEURON 1 - Invalid INDEX\n");
		exit(2);
	}
}
int cell_output(struct neuronal_cell src) {
	return src.out;
}
#endif
