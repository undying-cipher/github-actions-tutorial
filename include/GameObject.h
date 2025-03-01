#pragma once
#include "Component.h"
#include <memory>
#include <vector>

class GameObject {
private:
  std::vector<std::shared_ptr<Component>> components;

public:
  void addComponent(std::shared_ptr<Component> component);
  void updateComponents();
};
