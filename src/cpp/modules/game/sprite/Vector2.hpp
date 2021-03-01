#pragma once
#include "Vector2.h"

template<typename T>
Flappy::game::sprite::Vector2<T>::Vector2() : x(0.0f), y(0.0f) {
	// none
}

template<typename T>
Flappy::game::sprite::Vector2<T>::Vector2(T _x, T _y) : x(_x), y(_y) {
	// none
}

template<typename T>
Flappy::game::sprite::Vector2<T> Flappy::game::sprite::Vector2<T>::operator+(Vector2<T> vec2) {
	Vector2 temp(this->x + vec2.getX(), this->y + vec2.getY());

	return temp;
}

template<typename T>
Flappy::game::sprite::Vector2<T> Flappy::game::sprite::Vector2<T>::operator-(Vector2<T> vec2) {
	Vector2 temp(this->x - vec2.getX(), this->y - vec2.getY());

	return temp;
}

template<typename T>
Flappy::game::sprite::Vector2<T> Flappy::game::sprite::Vector2<T>::operator*(Vector2<T> vec2) {
	Vector2 temp(this->x + vec2.getX(), this->y + vec2.getY());

	return temp;
}

template<typename T>
Flappy::game::sprite::Vector2<T> Flappy::game::sprite::Vector2<T>::operator/(Vector2<T> vec2) {
	Vector2 temp(this->x + vec2.getX(), this->y + vec2.getY());

	return temp;
}

template<typename T>
Flappy::game::sprite::Vector2<T>& Flappy::game::sprite::Vector2<T>::operator+=(Vector2<T> vec2) {
	this = this + vec2;
}

template<typename T>
Flappy::game::sprite::Vector2<T>& Flappy::game::sprite::Vector2<T>::operator-=(Vector2<T> vec2) {

	this = this - vec2;
}

template<typename T>
Flappy::game::sprite::Vector2<T>& Flappy::game::sprite::Vector2<T>::operator*=(Vector2<T> vec2) {

	this = this * vec2;
}

template<typename T>
Flappy::game::sprite::Vector2<T>& Flappy::game::sprite::Vector2<T>::operator/=(Vector2<T> vec2) {

	this = this / vec2;
}

template<typename T>
T Flappy::game::sprite::Vector2<T>::getX() const {
	return this->x;
}


template<typename T>
T Flappy::game::sprite::Vector2<T>::getY() const {
	return this->y;
}


template<typename T>
void Flappy::game::sprite::Vector2<T>::setX(T x) {
	this->x = x;
}

template<typename T>
void Flappy::game::sprite::Vector2<T>::setY(T y) {
	this->y = y;
}
