#include <iostream> 
#include <cstdlib>
#include <string>
#include <math.h>
using namespace std;
// 4 xatu, 9 poverhiv, 6 pid'jzdiv

int test() {
	cout << "# of flat = ";
	int x, x1, y, z;
	cin >> x;
	
/*	y = (x/36)+1; // pid'jzd
	z = ((x%36)/4)+1; // poverh
*/
	y = (x+35)/36; // pid'jzd
	x1 = x-(y-1)*36; // naladka
	z = (x1+3)/4; // poverh
	
	cout << "Pid'jzd # " << y << endl;
	cout << "Poverh # " << z << endl; 
	test();
}

int main() {
	test();
	system("pause");
}
