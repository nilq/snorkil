#pragma once

#ifndef LAYER_H

#define LAYER_H

#include <iostream>
#include <math.h>
#include <vector>

class Layer {
public:
  Layer();

  std::vector<float> input;
  std::vector<float> output;
  std::vector<float> layer_deltas;
  std::vector<float> next_layer_deltas;

  virtual void forward() = 0;
  virtual void calc_deltas(std::vector<float> next_layer_deltas) = 0;
  virtual void update_params(float learning_rate) = 0;
};

#endif
