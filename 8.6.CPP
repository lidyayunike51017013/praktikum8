#include <conio.h>
#include <iostream.h>

int main(void)
{
int jumlah=0;
int bilangan;
for (bilangan=0;bilangan < 25;bilangan++)
{
jumlah += bilangan;
if (bilangan >=5) break;
}
cout <<"Deret Bilangan : 1 + 3 + ... + "<< bilangan << endl;
cout <<"Jumlah deret Bilangan = " <<jumlah;
getch();
return 0;
}