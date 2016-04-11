#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	float x = 0;
	float m[6];
	m[0]=0.5; m[1]=0.25; m[2]=0.1; m[3]=0.05; m[4]=0.02; m[5]=0.01;
	int c[6];
	for (int t=0; t<7; t++)
    {
        c[t]=0;
    }

	cout << "Vvedit summu dlya rozminy (y formati x.xx)" << endl;
	cin >> x;
	
	for (int i=0; i<6; i++) {
		while (x>=m[i]) {
			c[i]++;
			x = x - m[i];
		}
		cout << m[i] << "kop =" << c[i] << endl;
	}
	
	system("pause");
}
