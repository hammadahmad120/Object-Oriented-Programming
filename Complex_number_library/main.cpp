#include<iostream>
#include "complex.h"
#include<cmath>
using namespace std;
void main()
{
	myComplex obj1(2, 2), obj2, obj3, rslt;
	double r, i;
	cout << "enter real part for 1st complex number :";
	cin >> r;
	cout << "enter imaginary part for 1st complex number :";
	cin >> i;
	obj2.setValues(r, i);
	cout << "enter real part for 2nd complex number :";
	cin >> r;
	cout << "enter imaginary part for 2nd complex number :";
	cin >> i;
	obj3.setValues(r, i);
	cout << "\n1st complex number is (" << obj2.getReal() << "," << obj2.getImg() << ")\n\n";
	cout << "2nd complex number is (" << obj3.getReal() << "," << obj3.getImg() << ")\n\n";
	if (obj2.isreal())
		cout << "\n\n\t1st complex is pure real number\n";
	else
		cout << "\n\n\t1st complex no is not a real number only\n";
	if (obj2.isimg())
		cout << "\n\n\t 1st complex no is pure imaginary number\n";
	else
		cout << "\n\n\t 1st complex no is not a imaginary number only\n";
	if (obj3.isreal())
		cout << "\n\n\t2nd complex is pure real number\n";
	else
		cout << "\n\n\t2nd complex no is not a real number only\n";
	if (obj3.isimg())
		cout << "\n\n\t 2nd complex no is pure imaginary number\n";
	else
		cout << "\n\n\t 2nd complex no is not a imaginary number only\n";
	if (obj1.equal(obj2, obj3))
		cout << "\n\n\tboth are equal";
	else
		cout << "\n\n\tboth are not equal";
	cout << "\n\nmagnitude of 1st complex number is = " << obj2.magnitude() << endl;
	cout << "\n\nmagnitude of 2nd complex number is = " << obj3.magnitude() << endl;
	rslt = obj2.conjugate();
	if (rslt.getImg() < 0)
		cout << "\nconjugate of  1st complex number is = (" << rslt.getReal() << " + " << -1 * rslt.getImg() << "i)" << endl;
	else
		cout << "\nconjugate of 1st complex number is = (" << rslt.getReal() << " - " << rslt.getImg() << "i)" << endl;
	rslt = obj3.conjugate();
	if (rslt.getImg() < 0)
		cout << "\nconjugate of  2nd complex number is = (" << rslt.getReal() << " + " << -1 * rslt.getImg() << "i)" << endl;
	else
		cout << "\nconjugate of 2nd complex number is = (" << rslt.getReal() << " - " << rslt.getImg() << "i)" << endl;
	rslt = rslt.add(obj2, obj3);
	cout << "\n\nresult of addition is = (" << rslt.getReal() << "," << rslt.getImg() << ")" << endl;
	rslt = rslt.subtract(obj2, obj3);
	cout << "\n\nresult of subtraction is = (" << rslt.getReal() << "," << rslt.getImg() << ")" << endl;
	rslt = rslt.multiply(obj2, obj3);
	cout << "\n\nresult of multiplication is = (" << rslt.getReal() << "," << rslt.getImg() << ")" << endl;
	rslt = rslt.division(obj2, obj3);
	cout << "\n\nresult of division is = (" << rslt.getReal() << "/" << obj3.magnitude() << "," << rslt.getImg() << "/" << obj3.magnitude() << ")" << endl;
	cout << endl;
}