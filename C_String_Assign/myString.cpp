#include <iostream>
#include "myString.h"
using namespace std;
int len = 0;
void myString::set(char *s)
{
	str = s;
}
void myString::getsubstring(int s, int n)
{
	cout << "\n\n\t\trequired substring is :";
	for (int i = 0; i < n; i++)
		cout << str[s++];
}
void myString::upper()
{
	cout << "\n\n\t\tuppercase string is :";
	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
			cout << char(str[i] - 32);         //convert lowercase to upper
		else
			cout << str[i];
	}
	cout << endl;
}
void myString::lower()
{
	cout << "\n\n\t\tlower case string :";
	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
			cout << char(str[i] + 32);          //condition that convert lower to upper
		else
			cout << str[i];
	}
	cout << endl;
}
void myString::proper()
{
	cout << "\n\n\t\tproper string is :";
	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] == ' '&&str[i + 1] >= 'a'&&str[i + 1] <= 'z')
		{
			cout << " ";
			cout << char(str[i + 1] - 32);
			i++;
		}
		else
			cout << str[i];
	}
	cout << endl;

}
void myString::alternate()
{
	cout << "\n\n\t\talternate string is :";
	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')        //conditions to convert upper to lower and lower to upper
			cout << char(str[i] - 32);
		else if (str[i] >= 'A'&&str[i] <= 'Z')
			cout << char(str[i] + 32);
		else
			cout << str[i];
	}
	cout << endl;
}
void myString::concatenater(char st[])
{
	int l;
	char s[50];
	cout << "\nenter string to be concatenated to right  :";
	cin >> s;
	l = strlen(st);          //to find length of string
	for (int i = 0; s[i] != NULL; i++)
	{
		st[l] = s[i];             //store subtring at right of actual string
		l++;
	}

	cout << "\n\n\t\tconcatenated string to right is :";
	st[l] = NULL;
	cout << st << endl;

}
void myString::concatenatel(char st[])
{
	int l;
	char s[50];
	cout << "\nenter string to be concatenated to left  :";
	cin >> s;
	l = strlen(s);
	for (int i = 0; st[i] != NULL; i++)
	{
		s[l] = st[i];                //store subtring at left of actual string
		l++;
	}


	cout << "\nconcatenated string to left is :";
	s[l] = NULL;
	cout << s << endl;

}
int* myString::occurence()
{
	static int count[26] = { 0 };
	int i, n;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
		{
			n = str[i] - 'a';                   //to store location of lowercase letter and incriment in it
			count[n]++;
		}
		else if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			n = str[i] - 'A';                        //to store location of uppercase letter and incriment in it
			count[n]++;
		}
	}
	return count;
}
int myString::occurenceOfChar()
{
	int n = 0;
	char ch;
	cout << "\nenter character whose occurence is to find :";
	cin >> ch;
	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] == ch)
			n++;
	}
	cout << "\n\n\t\ttimes of occurence of " << ch << " is ";
	return n;
}

void myString::removechar()
{
	char ch;
	cout << "\nenter character  you want to remove ";
	cin >> ch;
	cout << "\n\n\t\tremoved character string is :";
	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] != ch)
			cout << str[i];
	}
}

void myString::length()
{
	len = strlen(str);
	cout << "\n\n\t\tlength of string is :" << len << endl;
}
void myString::right()
{
	int n;
	cout << "\nenter charactera you want to see from right ";
	cin >> n;
	cout << "\n\n\t\trequired string is ";
	n = len - n;                     //to find index to print characters from right
	while (str[n] != NULL)
	{
		cout << str[n];
		n++;
	}
}
void myString::left()
{
	int n;
	cout << "\nenter characters you want to see from right ";
	cin >> n;
	cout << "\n\n\t\trequired string is ";
	for (int i = 0; i < n; i++)
		cout << str[i];
}
void myString::mid()
{
	int n, m;
	cout << "\nenter characters you want to see from mid ";
	cin >> n;
	m = len / 2;
	cout << "\n\n\t\trequired string is :";
	for (int i = 0; i < n; i++)
	{
		cout << str[m];
		m++;
	}
	cout << endl;
}
void myString::vovel()
{
	int i = 0, no = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			no++;                    //condition to check vovel,if true then incriment in variable to count vovels
		i++;
	}
	cout << "\n\n\t\tnumber of vovels are:  " << no << endl;
}
void myString::polidrone()
{
	int n = 0, i = 0;
	bool f = true;
	n = strlen(str);
	while (n != i)                  //loop that check each character from end and start if they are not equal value in flag is changed
	{
		if (int(str[n]) != int(str[i]))
		{
			f = false;
			n--;
			i++;
		}
		else
		{
			n--;
			i++;
		}
	}
	if (f)
		cout << "\ngiven string is palindrome\n\n";
	else
		cout << "given string is not palindrome \n\n";
}
void myString::nwords()
{
	int i = 0, no = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')              //loop to count words,there is one complete word till space
		{
			i++;
			if (str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'A'&&str[i] <= 'Z')
				no++;                                                             //no var to count total words
		}
		else
			i++;                                                              //if str[i] is not equal to space then there is no incriment in no
	}
	i = 0;
	if (str[i] == ' ')
		cout << "\n\n\t\tnumber of words are : " << no << endl;
	else
		cout << "\n\n\t\tnumber of words are : " << ++no << endl;
}
void myString::otherChar()
{
	int n = 0;
	for (int i = 0; str[i] != NULL; i++)
	{
		if (!(str[i] >= 'a' || str[i] <= 'z' || str[i] >= 'A' || str[i] <= 'Z'))
			n++;
	}
	cout << "\n\n\t\tnumber of other characters are : " << n << endl;
}

