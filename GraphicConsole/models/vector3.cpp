#include "../headers/vector3.h"

Vector3::Vector3(float x, float y, float z) {

	this->x = x;
	this->y = y;
	this->z = z;

}

Vector3::Vector3(const Vector3 &pos) {

	this->x = pos.x;
	this->y = pos.y;
	this->z = pos.z;

}

Vector3 Vector3::operator + (const Vector3 &object) {

	Vector3 result(

		this->x + object.x,
		this->y + object.y,
		this->z + object.z

	);

	return result;

}

void Vector3::operator += (const Vector3 &object) {

	this->x += object.x;
	this->y += object.y;
	this->z += object.z;

}

Vector3 Vector3::operator - (const Vector3 &object) {

	Vector3 result(

		this->x - object.x,
		this->y - object.y,
		this->z - object.z

	);

	return result;

}

void Vector3::operator -= (const Vector3 &object) {

	this->x -= object.x;
	this->y -= object.y;
	this->z -= object.z;

}

Vector3 Vector3::operator * (const Vector3 &object) {

	Vector3 result(

		this->x * object.x,
		this->y * object.y,
		this->z * object.z

	);

	return result;

}

void Vector3::operator *= (const Vector3 &object) {

	this->x *= object.x;
	this->y *= object.y;
	this->z *= object.z;

}

Vector3 Vector3::operator / (const Vector3 &object) {

	Vector3 result(

		this->x / object.x,
		this->y / object.y,
		this->z / object.z

	);

	return result;

}

void Vector3::operator /= (const Vector3 &object) {

	this->x /= object.x;
	this->y /= object.y;
	this->z /= object.z;

}

void Vector3::operator /= (const float &value) {

	this->x /= value;
	this->y /= value;
	this->z /= value;

}