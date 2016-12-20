#include <iostream>
//#include <vector>
#include "zbior.h"
//#include "zbior.cpp"

using namespace std;

template<class T>
void Zbior<T>::operator + (T x)
{
	zbior.push_back(x);
}

template<class T>
void Zbior<T>::operator + (Zbior x)
{
	for(int i=0;i<x.zbior.size();i++)
			zbior.push_back(x.zbior[i]);
}

template<class T>
bool Zbior<T>::comp(T a, T b)
{
	return a<b;
}

template<class T>
void Zbior<T>::mySort()
{
	sort(zbior.begin(),zbior.end());
}
