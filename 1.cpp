/* �������� ����������� �� ��� ))
v1.03*/
#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;

void calc ()
{
	
	setlocale(LC_ALL, "Russian");
	char p = '+';
	char m = '-';
	char n = '*';
	char d = '/';
	char x;
	double a,b,z;
	cout << "����i�� ����� �����: ";
	cin >> a;
	cout << "����i�� ���� ��� ������ii: ";
	cin >> x;
	cout << "����i�� ����� �����: ";
	cin >> b;
	
	if (x == p) {
		z = a + b;
		cout << "= " << z << endl;
	} else if (x == m) {
		z = a - b;
		cout << "= " << z << endl;
	} else if (x == n) {
		z = a * b;
		cout << "= " << z << endl;
	}  else if (x == d) {
		z = a / b;
		cout << "= " << z << endl;
	} else {
		cout << "������� ���i���� ���� ������ii" << endl;
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

