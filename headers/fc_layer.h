#pragma once

#ifndef FC_LAYER_H

#define FC_LAYER_H

#include <layer.h>

class FC_Layer : public Layer {
public:
  FC_Layer();
  FC_Layer(unsigned int input_size, unsigned int output_size);

  unsigned int input_size;
  unsigned int output_size;

  std::vector<float> weights;
  std::vector<float> biases;

  void forward();
  void calc_deltas(std::vector<float> next_layer_deltas);
  void update_params(float learning_rate);
};

#endif
