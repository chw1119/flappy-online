#ifndef __Vector2
#define __Vector2
#include "./../../module.h"


template <typename T>
class Flappy::game::sprite::Vector2	 {

private:
	T x;
	T y;

public:
	Vector2();
	Vector2(T _x, T _y);

	Vector2<T> operator+(Vector2<T> vec2);
	Vector2<T> operator-(Vector2<T> vec2);
	Vector2<T> operator*(Vector2<T> vec2);
	Vector2<T> operator/(Vector2<T> vec2);

	Vector2<T>& operator+=(Vector2<T> vec2);
	Vector2<T>& operator-=(Vector2<T> vec2);
	Vector2<T>& operator*=(Vector2<T> vec2);
	Vector2<T>& operator/=(Vector2<T> vec2);

	T getX() const;
	T getY() const;

	void setX(T x);
	void setY(T y);
};


#include "./Vector2.hpp"

#endif