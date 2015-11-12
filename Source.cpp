#include <iostream>
#include <string>
#include"Data.h"
#include"ksiazka_teleadresowa.h"

using namespace std;

int main() {

	Data data_urodzenia;
	Data data_zatrudnienia(25, 8, 2011);
	cout << "test1\n";
	Ksiazka_teleadresowa moja_ksiazka;
	cout << "test2\n";
	Ksiazka_teleadresowa inna("Ala", "ma kota", data_zatrudnienia);

	cout << "Imie " << inna.get_imie() << endl;
	cout << "Nazwisko " << inna.get_nazwisko() << endl;
	cout << "Dzien-miesiac-rok " << inna.get_data_ur().get_dzien() << "-" <<
		inna.get_data_ur().get_miesiac() << "-" << inna.get_data_ur().get_rok() << endl;

	moja_ksiazka.set_imie("Albert");
	moja_ksiazka.set_nazwisko("Einstein");
//	moja_ksiazka.set_data_ur(Data(14, 3, 1879));
	moja_ksiazka.set_data_ur(14,3,1879);

	cout << "Imie " << moja_ksiazka.get_imie() << endl;
	cout << "Nazwisko " << moja_ksiazka.get_nazwisko() << endl;
	cout << "Dzien-miesiac-rok " << moja_ksiazka.get_data_ur().get_dzien() << "-" <<
		moja_ksiazka.get_data_ur().get_miesiac() << "-" << moja_ksiazka.get_data_ur().get_rok() << endl;

	system("pause");
	return 0;
}
