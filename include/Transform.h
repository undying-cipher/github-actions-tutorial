#pragma once
#include "Component.h"
#include <cstdio>

class Transform : public Component {
private:
  float x, y, z;

public:
  Transform(float x, float y, float z);
  void update() override;
  void setPosition(float newX, float newY, float newZ);
  float getPositionX() const { return x; }
  float getPositionY() const { return y; }
  float getPositionZ() const { return z; }
};
