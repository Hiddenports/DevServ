#ifndef NEURON_H_
#define NEURON_H_
#define NEURON_H_VERSION "0.1"
#define NEURON_H_VERSION_LEN 4
namespace neuronal {
     char[NEURON_H_VERSION_LEN] neuron_version() {
          return NEURON_H_VERSION;
     }
 
}
#endif
