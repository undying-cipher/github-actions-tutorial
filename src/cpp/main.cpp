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

// #include <iostream>
// #include <memory>
// #include <vector>
//
// /*
//  * INFO: This project is a component based architecture sample.
//  * It serves no purpose and is built by this repo's CI/CD workflow.
//  * */
//
// using std::make_shared;
// using std::printf;
// using std::shared_ptr;
//
// // WARN: Abstract base class for components
// class Component {
// public:
//   virtual ~Component() {}
//   virtual void update() = 0;
// };
//
// // INFO: 3D translation transform
// class Transform : public Component {
// private:
//   float x, y, z;
//
// public:
//   Transform(float x, float y, float z) : x(x), y(y), z(z) {}
//   void update() override {
//     printf("Translation transform: (%f, %f, %f)\n", x, y, z);
//   }
//   void setPosition(float newX, float newY, float newZ) {
//     x = newX;
//     y = newY;
//     z = newZ;
//   }
// };
//
// // INFO: Component manager
// class GameObject {
// private:
//   std::vector<shared_ptr<Component>> components;
//
// public:
//   void addComponent(shared_ptr<Component> component) {
//     components.push_back(component);
//   }
//
//   void updateComponents() {
//     for (auto &component : components) {
//       component->update();
//     }
//   }
// };

// // INFO: Main program
// int main() {
//   printf("——————————————————————————————\n");
//   printf("Running component system... \n");
//   printf("==============================\n");
//
//   GameObject gameObject;
//
//   // Shared smart pointer to transform
//   auto transform = make_shared<Transform>(1.f, 2.f, 3.f);
//   gameObject.addComponent(transform);
//   gameObject.updateComponents();
//
//   // Update position, then update again
//   transform.get()->setPosition(4.f, 5.f, 6.f);
//   gameObject.updateComponents();
//
//   // Update position, then update again
//   transform.get()->setPosition(7.f, 8.f, 9.f);
//   gameObject.updateComponents();
//
//   return 0;
// }
