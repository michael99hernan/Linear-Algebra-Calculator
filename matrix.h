#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;
class matrix
{
public:
	matrix(int,int);
	void createMatrix();
	void display();
	void rowechelon();
	void swapRows(int, int);
	~matrix();

private:
	float ** mat;
	int r;
	int c;
};

#endif