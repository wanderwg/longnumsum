#include <iostream>
#include <string>
using namespace std;
int main()
{
	string sNum1, sNum2;
	while (cin >> sNum1 >> sNum2)
	{
		int end1 = sNum1.size() - 1;
		int end2 = sNum2.size() - 1; 
		int val1 = 0, val2 = 0, carry = 0;
		string temp;
		while (end1 >= 0 || end2 >= 0)
		{
			if (end1 >= 0)
				val1 = sNum1[end1--] - '0';
			else
				val1 = 0;
			if (end2 >= 0)
				val2 = sNum2[end2--] - '0';
			else
				val2 = 0;

			int value = val1 + val2 + carry;
			if (value > 9)
			{
				carry = 1;
				value = value - 10;
			}
			else
				carry = 0;
			temp += (value + '0');
		}
		if (carry == 1)
			temp += '1';
		string ret(temp.rbegin(), temp.rend());
		cout << ret << endl;
	}
	return 0;
}