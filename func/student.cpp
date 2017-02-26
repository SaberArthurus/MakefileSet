#include "student.h"
#include <string>
#include <iostream>
using namespace std;
void Student::setId(int id){
	this->id = id;
}

void Student::printInfo() {
	cout << id << " " << name << endl;
}
