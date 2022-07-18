#pragma once


template<class T, int size>

class SmartArray
{
	T* mas;
	int _size;
public:
	SmartArray();
	void show_array();

};
template<class T, int size>
SmartArray<T,size>::SmartArray()
{
	this->mas = new T[size];
	for (int i = 0; i < size; i++) mas[i] = (T)i/2;
	this->_size = size;
}
template<class T,int size>
void SmartArray<T, size>::show_array()
{
	for (int i = 0; i < size; i++)
		std::cout << mas[i]<<", ";
	std::cout << std::endl;

}