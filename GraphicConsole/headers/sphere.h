#ifndef SPHERE_H
#define SPHERE_H

#include <cmath>

#include "vector3.h"

class Sphere : public Vector3 {

public:

	float radius;

	Sphere(Vector3 position, float radius);

	Sphere(const Sphere &obj) = delete;

	float checkHitBeam(Vector3 &camera);

};

#endif