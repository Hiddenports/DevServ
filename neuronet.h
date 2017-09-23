#ifndef NEURONET_H_
#ifndef NEURON_H_
#ifndef BASIC_H_
#include "basic.h"
#endif
int neuron(int bit1, int bit2, int bit3, int bit4, int level) {
	if(level == 1)
		return ((bit1 + bit2 + bit3 + bit4) >= level);
	else
		return 0;
}
struct neuronal_cell {
	int bit[4];
};
int cell_update(struct neuronal_cell target, int level) {
	return neuron(target.bit[0], target.bit[1], target.bit[2], target.bit[3], level);
}
int cell_input(struct neuronal_cell target, int value, int index) {
	if(index == 1) {
		target.bit[0] = value;
		return target.bit[0];
	}
	if(index == 2) {
		target.bit[1] = value;
		return target.bit[1];
	}
	if(index == 3) {
		target.bit[2] = value;
		return target.bit[2];
	}
	if(index == 4) {
		target.bit[3] = value;
		return target.bit[3];
	}
		printf("ERROR: NEURON 1 - Invalid INDEX\n");
		exit(2);
}
struct neuronal_cell cell_get(struct neuronal_cell c1, struct neuronal_cell c2, struct neuronal_cell c3, struct neuronal_cell c4, int level) {
	struct neuronal_cell ret;
	ret.bit[0] = cell_update(c1, level);
	ret.bit[1] = cell_update(c2, level);
	ret.bit[2] = cell_update(c3, level);
	ret.bit[3] = cell_update(c4, level);
	return ret;
}
#endif
#endif
