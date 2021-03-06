#include <iostream>;
#include <time.h>;
#include <vector>;
#include <iomanip>;
using namespace std;



class Abonent {
public:
	int id;
protected:
	string sName;
	string phoneNumber;
public:
	Abonent(int _id, string _sName, string _phoneNumber) {
		id = _id;
		sName = _sName;
		phoneNumber = _phoneNumber;
	}
	~Abonent() {};


	friend class Notebook;
};

class Notebook {

public:

	void change(Abonent& ob, string _newPhoneNumber) {
		ob.phoneNumber = _newPhoneNumber;
	}
	void show(Abonent& ob) {
		cout <<  setw(4) << ob.id;
		cout << setw(16) << ob.sName;
		cout << setw(12) << ob.phoneNumber << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	vector<Abonent> abonentArr;
	Notebook notebook;
	abonentArr.push_back(Abonent(100, "Пупкина", "89184005916"));
	abonentArr.push_back(Abonent(101, "Стулова", "89184567181"));
	abonentArr.push_back(Abonent(102, "Петров", "89184514920"));
	abonentArr.push_back(Abonent(103, "Нальчик", "89184514979"));
	abonentArr.push_back(Abonent(104, "Радеон", "89184515687"));
	for (int i = 0; i < abonentArr.size(); i++) {
		if (abonentArr[i].id == 103) {
			notebook.change(abonentArr[i], "89990548400");
			break;
		}
	}
	cout << setw(4) << "id";
	cout  << setw(16) << "sName";
	cout << setw(12) << "phoneNumber" << endl;
	for (int i = 0; i < abonentArr.size(); i++) {
		notebook.show(abonentArr[i]);
	}
	return 0;
}
