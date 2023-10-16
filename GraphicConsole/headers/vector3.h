#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>

class Vector3 {

public:

	float x, y, z;

	Vector3(float x, float y, float z);

	Vector3(const Vector3 &pos);

	Vector3 operator + (const Vector3 &object);

	void operator += (const Vector3 &object);

	Vector3 operator - (const Vector3 &object);

	void operator -= (const Vector3 &object);

	Vector3 operator * (const Vector3 &object);

	void operator *= (const Vector3 &object);

	Vector3 operator / (const Vector3 &object);

	void operator /= (const Vector3 &object);

	void operator /= (const float &value);

};

#endif