#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>

using namespace std;

class Human {
protected:
	string surname;
	string name;
	string midname;
	int age = 0;
public:
	Human() {};
	Human(string surname = "", string name = "", string midname = "", int age = 0);
	virtual void print() {};
	~Human();
};

class Student : public Human {
	bool on_lesson;
public:
	Student(string surnameStd, string nameStd, string midnameStd, int ageStd, bool on_lesson);
	void print();
};

class Boss : public Human {
	int number_of_workers;
public:
	Boss(string surname, string name, string midname, int age, int number_of_workers);
	void print();
};


#endif Header