#include <iostream>
#include <vector>
#include "zbior.cpp"
#include <algorithm>

using namespace std;

int main()
{
	Zbior<string> a;
	a+"aaa";
	Zbior<string> b;
	b+"zzz";
	
	a+b;
	for(int i=0;i<a.zbior.size();i++)
		cout<<a.zbior[i]<<endl;
	
	cout<<endl;	
	a+"bbb";
	
	a.mySort();
	
	
	for(int i=0;i<a.zbior.size();i++)
		cout<<a.zbior[i]<<endl;
}
