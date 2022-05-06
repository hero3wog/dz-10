#include "Header.h"

int main() {
	
	Student student("Ivanov", "Ivan", "Ivanovich", 20, true);
	Boss boss("Petrov", "Petr", "Petrovich", 40, 80);
	student.print();
	cout << endl;
	boss.print();
}