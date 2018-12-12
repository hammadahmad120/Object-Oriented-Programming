#include "complex.h"
#include<iostream>
#include<cmath>
void myComplex::setValues(double r, double i)
{
	real = r;
	img = i;
}
bool myComplex::isreal()
{
	if (img == 0)
		return true;
	else
		return false;

}
bool myComplex::isimg()
{
	if (real == 0)
		return true;
	else
		return false;
}
bool myComplex::equal(myComplex x, myComplex y)
{
	if (x.real == y.real&&x.img == y.img)
		return true;
	else
		return false;
}
double myComplex::magnitude()
{
	return (sqrt(real*real + img*img));
}
myComplex myComplex::conjugate()
{
	myComplex a;
	a.img = img;
	a.real = real;
	return a;
}
myComplex myComplex::add(myComplex x, myComplex y)
{
	myComplex a;
	a.real = x.real + y.real;
	a.img = x.img + y.img;
	return a;
}
myComplex myComplex::subtract(myComplex x, myComplex y)
{
	myComplex a;
	a.real = x.real - y.real;
	a.img = x.img - y.img;
	return a;
}
myComplex myComplex::multiply(myComplex x, myComplex y)
{
	myComplex a;
	a.real = x.real*y.real + (-1 * x.img*y.img);
	a.img = x.real*y.img + x.img*y.real;
	return a;

}

myComplex myComplex::division(myComplex x, myComplex y)
{
	myComplex a;
	a.real = x.real*y.real + (x.img*y.img);
	a.img = x.real*(-1 * y.img) + x.img*y.real;
	return a;
}