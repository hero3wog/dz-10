#include "Header.h"	

Human::Human(string surname, string name, string midname, int age) {
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->age = age;
}
Human::~Human() {
}
Student::Student(string surnameStd, string nameStd, string midnameStd, int ageStd, bool on_lesson = 0) : Human(surnameStd, nameStd, midnameStd, ageStd) {
	this->on_lesson = on_lesson;
}
void Student::print() {
	cout << "Surname - " << surname << endl;
	cout << "Name - " << name << endl;
	cout << "Midname - " << midname << endl;
	cout << "Age - " << age << endl;
	cout << "On lesson - ";
	if (on_lesson)
		cout << "Yes\n";
	else
		cout << "No\n";
}
Boss::Boss(string surname, string name, string midname, int age, int number_of_workers = 0) : Human(surname, name, midname, age) {
	this->number_of_workers = number_of_workers;
}
void Boss::print() {
	cout << "Surname - " << surname << endl;
	cout << "Name - " << name << endl;
	cout << "Midname - " << midname << endl;
	cout << "Age - " << age << endl;
	cout << "Number of workers - " << number_of_workers << endl;
}