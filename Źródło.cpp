using namespace std;
#include <iostream>
#include<chrono>
#include<random>
#include<time.h>

const int N = 10;
int main()
{
	srand(time(NULL));
	default_random_engine silnik(chrono::system_clock::now().time_since_epoch().count());
	uniform_int_distribution<int> rozklad(100, 20);
	char odp;
	int tab[N];
	do 
	{
		int ile;
		cout << "ile liczb losowych";
		cin >> ile;
		while (!cin)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "blad.ile liczb?" << endl;
			cin >> ile;
		}
		for (int i = 0; i < ile; i++)
		{
			cout << rand() % 20 + 30 << " ";
			cout << endl;
		}
		int i = 0;
		while (i < 20)
		{
			tab[i] = rozklad(silnik);
			cout << tab[i] << "";
			i++;
		}
		cout << endl;
		cout << "czy konczymy?(t)";
		cin >> odp;
	} while (odp != 't');
	return 0;
	}
	/*do
	{
		if (!cin)
		{
			cin.clear();
			cin.ignore(1000, '\t');
		}
		for (int i = 0; i < 20; i++)
		{
			out << rand() % 20 + 30 << " ";
			cout << encdl;
		}
		int i = 0;
		while (i < 20)
		{
			cout << rand() << "";
			i++;
		}
		cout << endl;
		cout << "czy konczymy?(t)";
		cin >> odp;
	} while (odp != 't');*/
	
		
	
	return 0;
}