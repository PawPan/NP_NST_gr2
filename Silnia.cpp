//Silnia.cpp
#include <iostream>
#include "funkcje.h"
#include "funkcje.cpp"
using namespace std;

int main(int argc, char** argv) {
	unsigned int n;
	cout<<"Podaj n: ";
	cin>>n;
	
	int a=n;
	long b=n;
	double d=n;
	
	zmiennaGlobalnaInt = silniaInt(a);
	zmiennaGlobalnaLong = silniaLong(b);
	zmiennaGlobalnaDouble = silniaDouble(d);
	
	cout<<n<<"!(int) = "<<zmiennaGlobalnaInt<<endl;
	cout<<n<<"!(long) = "<<zmiennaGlobalnaLong<<endl;
	cout<<n<<"!(double) = "<<zmiennaGlobalnaDouble<<endl;
	return 0;
}
//funkcje.cpp
#include <iostream>
#include "funkcje.h"
using namespace std;

int silniaInt(int a)
{
	if(a<2)
        return 1;
	
	return a*silniaInt(a-1);
}
long silniaLong(long a)
{
	if(a<2)
        return 1;
	
	return a*silniaLong(a-1);
}

double silniaDouble(double a)
{
	if(a<2)
        return 1;
	
	return a*silniaDouble(a-1);
}

//funkcje.h
#ifndef FUNKCJE_H_INCLUDED
#define FUNKCJE_H_INCLUDED

int zmiennaGlobalnaInt;
long zmiennaGlobalnaLong;
double zmiennaGlobalnaDouble;

int silniaInt(int a);
long silniaLong(long a);
double silniaDouble(double a);
#endif
