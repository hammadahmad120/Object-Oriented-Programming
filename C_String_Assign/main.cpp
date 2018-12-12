#include<iostream>
#include "myString.h"

using namespace std;
void main()
{
	int s, a, b, *p;
	char *p1, ch = 'a';
	char str1[100];
	cout << "\nenter size of array to store string : ";
	cin >> s;
	cout << "enter string ";
	cin.ignore();
	cin.getline(str1, 100);
	myString obj(s);
	obj.set(str1);
	cout << "\nenter starting index and number of character you want to see as substring :";
	cin >> a >> b;
	obj.getsubstring(a, b);
	obj.length();
	obj.left();
	obj.right();
	obj.mid();
	obj.vovel();
	//obj.polidrone();
	obj.nwords();
	obj.otherChar();
	p1 = obj.get();
	cout << "string you entered is ";
	for (int i = 0; p1[i] != NULL; i++)
		cout << p1[i];
	cout << endl;

	obj.lower();
	obj.upper();
	obj.proper();
	obj.alternate();
	cout << obj.occurenceOfChar();
	p = obj.occurence();
	for (int i = 0; i < 26; i++)
	{
		if (p[i] != 0)
			cout << "\noccurence of " << ch << " is " << p[i] << endl;
		ch++;
	}
	obj.removechar();
	obj.concatenater(str1);
	obj.concatenatel(str1);
	cout << endl;
}