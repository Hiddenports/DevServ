#ifndef NEURON_H_
#define NEURON_H_
#define NEURON_H_VERSION "0.2"
#define NEURON_H_VERSION_LEN 4
namespace neuronal { // neuron classes and functions
     char[NEURON_H_VERSION_LEN] neuron_version() {
          return NEURON_H_VERSION;
     }
     class cell {
          protected:
               int temp;
          public:
               int val[2];
			int out;
               int update(cell *input, int index) {
				if(index == 1) {
					val[0] = input.out;
					return 0;
				}
				else if(index == 2) {
					val[1] = input.out;
					return 0;
				}
				else
					return -1;
			}
			int calc(int method) {
				if(method == 1)
					out = val[1] || val[2];
				else(method == 2)
					out = val[1] && val[2];
			}
     }
}
namespace logic { // simple logics
     int xor(int bit1, int bit2) {
          return (bit1 != bit2);
     }
     int or(int bit1, int bit2) {
          return (bit1 || bit2);
     }
     int and(int bit1, int bit2) {
          return  (bit1 && bit2);
     }
}
#endif
