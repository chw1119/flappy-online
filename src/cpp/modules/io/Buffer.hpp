#pragma once
#include "./Buffer.h"

template<typename T>
void Flappy::io::Buffer<T>::init(int __size,T* data) {
	this->buffer = new T[__size];
	
	if (data != nullptr) memcpy(temp, data, sizeof(T) * __size);

	this->size = __size;
	this->position = 0;

}

template<typename T>
Flappy::io::Buffer<T>::Buffer() {
	init(Buffer::STANDARD_BUFFER_SIZE , nullptr)
}

template<typename T>
Flappy::io::Buffer<T>::Buffer(int size) {
	init(size, nullptr);
}

template<typename T>
Flappy::io::Buffer<T>::Buffer(int size, T* data) {
	init(size, data);
}


template<typename T>
Flappy::io::Buffer<T>::~Buffer() {
	delete[] this->buffer;
}

template<typename T>
int Flappy::io::Buffer<T>::getSize() const {
	return this->size;
}
template<typename T>
int Flappy::io::Buffer<T>::getPosition() const {
	return this->position
}

template<typename T>
void Flappy::io::Buffer<T>::setPosition(int position) {
	this->position = position;
}

template<typename T>
void Flappy::io::Buffer<T>::put(T data) {
	this->buffer[++this->position] = data;
}
template<typename T>
void Flappy::io::Buffer<T>::put(T data, int index) {
	this->buffer[index] = data;
}

template<typename T>
T Flappy::io::Buffer<T>::get() {
	return this->buffer[++this->position];
}
template<typename T>
T Flappy::io::Buffer<T>::get(int index) const {
	return this->buffer[index];
}

template<typename T>
T* Flappy::io::Buffer<T>::getPointer() const {
	return this->buffer;
}