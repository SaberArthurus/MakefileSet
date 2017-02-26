#include <cstdio>
#include <iostream>
#include <string>
#include "book.h"
#include "student.h"
using namespace std;


int main(int argc, char** argv){
	Book fic(1, 2);
	fic.setNum(10);
	fic.setLabel(2);
	fic.printInfo();
	Student stu(1, "main");
	stu.setId(1);
	stu.printInfo();
	return 0;
}