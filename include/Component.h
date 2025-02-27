#pragma once
#include <memory>

// WARN: Abstract base class for components
class Component {
public:
  virtual ~Component() {}
  virtual void update() = 0;
};
