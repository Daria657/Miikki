#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double d, a, c, R;
	const int s = 25;
	const int v = 2;
	const int z = 1;
	cout << "Input c-->";
	cin >> c;
	cout << "c=" << c << endl;
	cout << "Input d-->";
	cin >> d;
	cout << "d=" << d << endl;
	cout << "Input a-->";
	cin >> a;
	cout << "a=" << a << endl;
	if (c == 0)
	{
		cout << "Error.Expression cannot be evaluated." << endl;
		return 0;
	}
	if (d + a - 1 == 0)
	{
		cout << "Error.Expression cannot be evaluated." << endl;
		return 0;
	}
	if (sqrt(25 / c) <= 0)
	{
		cout << "Error.Expression cannot be evaluated." << endl;
		return 0;
	}
	else
	{
		R = (sqrt(25 / c) - d + 2) / (d + a - 1);
		cout << "Result=" << R << endl;
	}
	return 0;
}