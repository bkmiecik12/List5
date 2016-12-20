#ifndef ZBIOR_H
#define ZBIOR_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Zbior
{
	
	public:
	vector<T> zbior;
	
	void operator + (T x);
	void operator + (Zbior x);
	bool comp(T a, T b);
	void mySort();
	
};

#endif
