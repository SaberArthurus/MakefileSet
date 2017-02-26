#ifndef _STUDENT_H
#define _STUDENT_H
#include <string>
using namespace std;
class Student{
public:
	Student(){}
	Student(int id, string name): id(id), name(name){}
	~Student(){}
	void setId(int id);
	void printInfo();
private:
	int id;
	string name;
};
#endif