#include "../headers/sphere.h"

Sphere::Sphere(Vector3 position, float radius) : Vector3(position) {

	this->radius = radius;

}

float Sphere::checkHitBeam(Vector3 &camera) {

	if (camera.z < this->z) {

		return 0;

	} else {

		float distance = radius * radius - pow(camera.x - this->x, 2) - pow(camera.y - this->y, 2);

		if (distance > 0) {

			float z = std::sqrt(distance) / this->z;

			return z;

		} else {

			return 0;

		}

	}

}