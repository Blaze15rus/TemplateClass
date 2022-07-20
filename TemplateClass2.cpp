
#include <iostream>
#include "SmartArray.h"
using namespace std;

int main()
{
	SmartArray <double> a(5);
	SmartArray<double> b(7);
	a.show_array();
	b.show_array();
	a = b;
	a.show_array();
}

