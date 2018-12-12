#ifndef COMPLEX_H
#define COMPLEX_H

class myComplex
{
	double real, img;
public:
	myComplex()
	{
		real = img = 0;
	}
	myComplex(double x, double y)
	{
		real = x;
		img = y;
	}
	void setValues(double, double);
	double getImg()
	{
		return img;
	}
	double getReal()
	{
		return real;
	}
	bool isreal();
	bool isimg();
	bool equal(myComplex, myComplex);
	double magnitude();
	myComplex conjugate();
	myComplex add(myComplex, myComplex);
	myComplex subtract(myComplex, myComplex);
	myComplex multiply(myComplex, myComplex);
	myComplex division(myComplex, myComplex);
};
#endif

