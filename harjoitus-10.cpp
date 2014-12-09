//Made by Toni Pajukanta,Ryhmä IIO14S1

#include <iostream> 
using namespace std;
int main()
{
	float luku;
	float pos = 0;
	float neg = 0;
	cout << "Negatives and Positives\n\nInsert numbers as many as you want. Use '0' to end the program\n";
	while (cin >> luku) {
		if (luku == 0)
			break;
		else
			if (luku < 0)
				neg++;
			else
				pos++;

		
}
	cout << "\n-----------------------------";
	cout << "\nThere is " << neg << " negative number(s) and " << neg / (neg + pos) * 100 << "% of 100%";
	cout << "\nThere is " << pos << " positive number(s) and " << pos / (neg + pos) * 100 << "% of 100%"; 
	cout << "\nThe amount of numbers alltogether inputted is " << (pos + neg) << " and it's " << (neg + pos) / (neg + pos) * 100 << "% of 100%\n\n";

}
