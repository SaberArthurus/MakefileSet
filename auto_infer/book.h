#ifndef _BOOK_H
#define _BOOK_H
class Book {
public:
	Book(){}
	Book(int num, int label):num(num), label(label){}
	~Book(){}
	void setNum(int num);
	void setLabel(int label);
	void printInfo();
private:
	int num, label;
};
#endif