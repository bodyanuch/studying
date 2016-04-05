#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;
/*count how many tickets are lucky tickets for bus. Ticket is lucky when first and last digits of number of ticket is equal*/

int x = 0, y = 0, z = 0;

int main() 
{
do {
do {
	if (z < 9) {
z++;
} else {
	y++;
	z = 0;
}
if (x == z) {
	cout << "Lucky ticket:" << x << y << z << endl;
} else {}
} while (y < 10);
	if (y > 8) {
		x++;
		y = 0;
	}
	else {}
} while (x < 10);
}
