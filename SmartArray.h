#pragma once


template<class T>

class SmartArray
{
	T* mas;
	int size;
public:
	//Constructor&Distructor
	SmartArray(int size);
	~SmartArray();
	//Getters
	void show_array()const;
	//Operators
	SmartArray& operator =(const SmartArray& b);

};
template<class T>
SmartArray<T>::SmartArray(int size)
{
	this->mas = new T[size];
	for (int i = 0; i < size; i++) mas[i] = (T)i/2;
	this->size = size;
}

template<class T>
SmartArray<T>::~SmartArray()
{
	delete[]mas;
}


template<class T>
void SmartArray<T>::show_array() const
{
	for (int i = 0; i < size; i++)
		std::cout << mas[i]<<", ";
	std::cout << std::endl;

}
template<class T>
SmartArray<T>& SmartArray<T>:: operator =(const SmartArray& b)
{
	if (this->size != b.size)
	{
		delete[] mas;
		this->size = b.size;
		mas = new T[b.size];
	}
	for (int i = 0; i < this->size; i++)
	{
		this->mas[i] = b.mas[i];
	}
	return *this;
}
