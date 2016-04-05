#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;
/*count how many tickets are lucky tickets for bus. Ticket is lucky when first and last digits of number of ticket is equal*/

int x,y,z = 0;

int z_count() 
{
do {
z++;
} while (z<10); 
if (x == z){
	cout << "Lucky ticket" << x << y << z << endl;
} else {
	return 0;
}}

int y_count() 
{
do {
if (z == 9) {
y++;
} else {
	return 0;
}
z_count();
} while (y<10);
if (x == z){
	cout << "Lucky ticket" << x << y << z << endl;
} else {
	return 0;
	}
}

int x_count() 
{
do {
	if (y == 9) {
x++;
} else {
	return 0;
}
y_count();
} while (x<10);
if (x == z){
	cout << "Lucky ticket" << x << y << z << endl;
} else {
	return 0;
	}
}

int main()
{
	x_count();
	return 0;
}
