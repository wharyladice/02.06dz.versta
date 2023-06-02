

#include <iostream>
#include<Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Обчислення верст та кiлометрiв"<<endl;
	double versta = 1.067;
	double kilometru;
	double kilkist;
	cout << "Введiть кiльскiсть верст: "<<endl;
	cin >> kilkist;
	kilometru = kilkist / versta;
	cout << "Кiлькiсть "<<kilometru<<" з " << kilkist << " верст";

}


