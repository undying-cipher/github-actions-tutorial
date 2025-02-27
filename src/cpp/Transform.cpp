
#include "Transform.h"

Transform::Transform(float x, float y, float z) : x(x), y(y), z(z) {}

void Transform::update() {
  std::printf("Translation transform: (%f, %f, %f)\n", x, y, z);
}

void Transform::setPosition(float newX, float newY, float newZ) {
  x = newX;
  y = newY;
  z = newZ;
}
