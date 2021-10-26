#include<iostream>
using namespace std;
class Abiturient {
private: 
	string Familiya,Name,Otchestvo,Adress;
	int Ocenka1, Ocenka2, Ocenka3;
public: 
	Abiturient(string Familiya_,string Name_, string Otchestvo_, string Adress_, int Ocenka1_, int Ocenka2_,int Ocenka3_) {
		Familiya = Familiya_;
		Name = Name_;
		Otchestvo = Otchestvo_;
		Adress = Adress_;
		Ocenka1 = Ocenka1_;
		Ocenka2 = Ocenka2_;
		Ocenka3 = Ocenka3_;
	}
	
	void show() {
		cout << "Familiya-" << Familiya << endl << "Name-" << Name << endl << "Otchestvo-" << Otchestvo << endl << "Adress-" << Adress << endl << "Ocenka1-" << Ocenka1 << endl << "Ocenka2-" << Ocenka2 << endl << "Ocenka3-" << Ocenka3 << endl << endl;
	}
	void Neud() {
		if (Ocenka1 < 3 && Ocenka2 < 3 && Ocenka3 < 3)
		{
			show();
		}
	}
	void Summ() {
		if (Ocenka1 + Ocenka2 + Ocenka3 > 10) {
			show();
		}
	}
	void Max() {
		if (Ocenka1 + Ocenka2 + Ocenka3 == 15) {
			show();
		}
	}
	void PoluMax() {
		if (Ocenka1 + Ocenka2 + Ocenka3 >= 7 && Ocenka1 + Ocenka2 + Ocenka3<=14);
		show();
	}
		~Abiturient() {

	}
};
int main() {
	
	Abiturient Massiv[5]{
		Abiturient("Yeliseyev","Platon","Vsevolodovich","Soviet 32", 2, 2,2),
		Abiturient("Yakovlev","Evgeny","Nikitich","Sadovaya 112", 3, 4,4),
		Abiturient("Pavlov","Igor","Kirillovich","Kirov 25", 5, 5,5),
		Abiturient("Veshnyakov","Alexander","Maksimovich","Rechnikov 406", 3, 3,5),
		Abiturient("Balashov","Dmitry","Artemovich","Rice 210", 5, 4,5)
	};
	cout << endl <<"Spisok Show";
	for (int i = 0; i < 5; i++) {
		Massiv[i].show();
	};
	cout << endl << "Spisok Neud";
	for (int i = 0; i < 5; i++) {
		Massiv[i].Neud();
	};
	cout << endl << "Spisok Max";
	for (int i = 0; i < 5; i++) {
		Massiv[i].Max();
	};
	cout << endl << "Spisok PoluMax";
	for (int i = 0; i < 5; i++) {
		Massiv[i].PoluMax();
	};
	return 0;

}
