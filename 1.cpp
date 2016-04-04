/* Жахливий калькулятор від Боді ))
v1.02*/
#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;

void calc ()
{
	
		setlocale(0, "");
	char p = '+';
	char m = '-';
	char n = '*';
	char d = '/';
	char x;
	double a,b,z;
	cout << "Vvedit pershe chuslo: ";
	cin >> a;
	cout << "Vvedit znak operacii: ";
	cin >> x;
	cout << "Vvedit druge chuslo: ";
	cin >> b;
	
	if (x == p) {
		z = a + b;
		cout << "= " << z << endl;
		return z;
	} else if (x == m) {
		z = a - b;
		cout << "= " << z << endl;
		return z;
	} else if (x == n) {
		z = a * b;
		cout << "= " << z << endl;
		return z;
	}  else if (x == d) {
		z = a / b;
		cout << "= " << z << endl;
		return z;
	} else {
		cout << "Vvedenuj nevirnuj znak operacii" << endl;
		cout << " " << endl;
	}
	calc ();
}

int main() 
{
	calc ();
	system("pause");
	return 0;
}

