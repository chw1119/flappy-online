#pragma once

#include "./../module.h"

template <typename T>

class Flappy::io::Buffer {
private:
	//const inline static int STANDARD_BUFFER_SIZE = 0x6;

	int size;
	int position;

	T* buffer;
private:
	
	void init(int size,T* data);
public:

	Buffer();
	Buffer(int size);
	Buffer(int size,T* data);

	~Buffer();

	int getSize() const;
	int getPosition() const;

	void setPosition(int position);

	void put(T data);
	void put(T data, int index);

	T get();
	T get(int index) const;

	T* getPointer() const;

};
