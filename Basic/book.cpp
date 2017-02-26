#include "book.h"
#include <iostream>
using namespace std;

void Book::setNum(int num){
	this->num = num;
}

void Book::setLabel(int label){
	this->label = label;
}

void Book::printInfo(){
	cout << num << " " << label << endl;
}