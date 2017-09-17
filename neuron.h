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
};
int cell_update(struct neuronal_cell target, int level) {
	return neuron(target.bit1, target.bit2, level);
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
struct neuronal_cell cell_get(struct neuronal_cell c1, struct neuronal_cell c2, int level) {
	struct neuronal_cell ret;
	ret.bit1 = cell_update(c1, level);
	ret.bit2 = cell_update(c2, level);
	return ret;
}
#endif