#include <iostream>
using namespace std;
int moves=0;
void hanoi(int disc, char, char, char );
void main()
{
	int disc;
	cout << "Enter Total discs : " ;
	cin >> disc;
	cout << endl;
	hanoi(disc, 'A', 'B', 'C');
	cout << "\n\n\tTotal moves : " << moves <<endl;
}
void hanoi(int disc, char start, char mid, char last)
{																																																																																																																																					
	moves++;
	if (disc == 1)
	{
		cout << "Move disc " << disc << " from " << start << " to " << last<< endl;
	}
	else
	{
		hanoi(disc - 1, start, last, mid);
		cout << "Move disc " << disc << " from " << start << " to " << last << endl;
		hanoi(disc - 1, mid, start, last);
	}
}