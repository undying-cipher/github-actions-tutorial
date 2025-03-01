#include "GameObject.h"
#include "Transform.h"
#include <memory>

using std::make_shared;

int main() {
  printf("——————————————————————————————\n");
  printf("Running component system... \n");
  printf("==============================\n");

  GameObject gameObject;

  // Shared smart pointer to transform
  auto transform = make_shared<Transform>(1.f, 2.f, 3.f);
  gameObject.addComponent(transform);
  gameObject.updateComponents();

  // Update position, then update again
  transform->setPosition(4.f, 5.f, 6.f);
  gameObject.updateComponents();

  // Update position, then update again
  transform->setPosition(7.f, 8.f, 9.f);
  gameObject.updateComponents();

  return 0;
}
