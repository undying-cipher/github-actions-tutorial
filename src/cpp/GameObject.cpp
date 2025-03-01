#include "GameObject.h"
#include "Component.h"

void GameObject::addComponent(std::shared_ptr<Component> component) {
  components.push_back(component);
}

void GameObject::updateComponents() {
  for (auto &component : components) {
    component->update();
  }
}
