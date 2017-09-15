#ifndef NEURON_H_
#define NEURON_H_
#define NEURON_H_VERSION "0.2"
#define NEURON_H_VERSION_LEN 4
namespace neuronal { // neuron classes and functions
     char[NEURON_H_VERSION_LEN] neuronal::neuron_version() {
          return NEURON_H_VERSION;
     }
     class cell {
          public:
               int val[2];
			int out;
               int update(cell *input, int index) {
				if(index == 1) {
					this.val[0] = input->out;
					return 0;
				}
				else if(index == 2) {
					this.val[1] = input->out;
					return 0;
				}
				else
					return -1;
			}
			int calc(int method) {
				if(method == 1)
					this.out = val[1] || val[2];
				else(method == 2)
					this.out = val[1] && val[2];
			}
     };
}
namespace logic { // simple logics
	class gates {
		public:
		int gates::xor(int bit1, int bit2) {
			return (bit1 != bit2);
		}
		int gates::or(int bit1, int bit2) {
			return (bit1 || bit2);
		}
		int gates::and(int bit1, int bit2) {
			return  (bit1 && bit2);
		}
	};
}
#endif
