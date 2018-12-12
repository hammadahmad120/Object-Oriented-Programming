
#ifndef MYSTRING_H
#define MYSTRING_H
class myString
{
	int size;
	char *str;
public:
	myString(int siz)
	{
		size = siz;          //constructor
	}
	void set(char*);            //to store adress of string
	char * get()
	{
		return str;        //to return string
	}
	void length();               //to find length of string
	void left();                 //to print desired characters from left
	void right();               //to print desired characters from right
	void mid();                //to print desired characters from mid
	void vovel();               //to find number of vovels
	void polidrone();       //to check string is polidrone or not
	void nwords();             //to find number of words
	void otherChar();          //to find number of letters that are not alphabets
	void getsubstring(int, int);    //to find substring from user desired location
	void upper();                  //convert string to uppercase
	void lower();                   //convert string to lowercase
	void proper();         //convert first letter of each word to uppercase
	void alternate();          //to convert uppercase to lower and vice versa
	void concatenatel(char[]);     //concatenate substring to left of string
	void concatenater(char[]);       //concatenate substring to right of string
	int occurenceOfChar();          //to find occurence of specific character
	int* occurence();              //to find occurence of all characters
	void removechar();                   //to remove specific character from string

};

#endif