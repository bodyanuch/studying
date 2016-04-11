#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;
/*count how many tickets are lucky tickets for bus. Ticket is lucky when first and last digits of number of ticket is equal*/

int main() {

int count = 0;
for (int ticket = 0; ticket <= 999999; ticket++)
{
   // з кожного б≥лета вит€гую €к≥ цифри
   const int i1 = (ticket / 100000);
   const int i2 = (ticket / 10000) % 10;
   const int i3 = (ticket / 1000) % 10;
   const int i4 = (ticket / 100) % 10;
   const int i5 = (ticket / 10) % 10;
   const int i6 = (ticket) % 10;
   if( i1 + i2 + i3 == i4 + i5 + i6)
 count++;
}

std::cout << count; 
}
