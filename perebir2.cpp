#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	double x = 0;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0; 

	cout << "Vvedit summu dlya rozminy" << endl;
	cin >> x;
	
	while (x >= 0.5) {
		a++;
		x = x - 0.5;
	}
	cout << "50kop = " << a << endl;
	
	while (x >= 0.25) {
		b++;
		x = x - 0.25;
	}
	cout << "25kop = " << b << endl;
	
	while (x >= 0.1) {
		c++;
		x = x - 0.1;
	}
	cout << "10kop = " << c << endl;
		
	while (x >= 0.05) {
		d++;
		x = x - 0.05;
	}
	cout << "5kop = " << d << endl;
	cout << "x=" << x << endl;
		
	while (x >= 0.02) {
		e++;
		x = x - 0.02;
	}
	cout << "2kop = " << e << endl;	
		
	while (x > 0) {
		f++;
		x = x - 0.01;
	}
	cout << "1kop = " << f << endl;
} 
