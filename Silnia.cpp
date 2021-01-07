//funkcje.h
//#ifndef FUNKCJE_H_INCLUDED
//#define FUNKCJE_H_INCLUDED

int zmiennaGlobalnaInt;
long globLong;
double globDoub;

int silInt(int a);
long silLong(long a);
double silDouble(double a);
//#endif

//Silnia.cpp
//Program powstal w celu cwiczenia commitow

#include <iostream>
//#include "funkcje.h"
//#include "funkcje.cpp"
using namespace std;

int main(int argc, char** argv) {
	unsigned int n;
	cout<<"Podaj n: ";
	cin>>n;

	int a=n;
	long b=n;
	double d=n;

	zmiennaGlobalnaInt = silInt(a);
	globLong = silLong(b);
	globDoub = silDouble(d);

	cout<<n<<"!(int) = "<<zmiennaGlobalnaInt<<endl;
	cout<<n<<"!(long) = "<<globLong<<endl;
	cout<<n<<"!(double) = "<<globDoub<<endl;
	return 0;
}

//funkcje.cpp
//#include <iostream>
//#include "funkcje.h"
//using namespace std;

int silInt(int a)
{
	if(a>2)
        return 0;

	return a*silInt(a-1);
}
long silLong(long a)
{
	if(a<2)
        return 1;

	return a*silLong(a-1);
}

double silDouble(double a)
{
	if(a<2)
        return 1;

	return a*silDouble(a-1);
}
