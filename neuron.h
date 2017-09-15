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
#endif
