#include "matrix.h"



matrix::matrix(int r,int c)
{
	this->r = r;
	this->c = c;
	mat = new int*[r];
	for (int i = 0; i < r; i++)
	{
		mat[i] = new int[c];
	}
}

void matrix::createMatrix()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter a value for spot (" << i << "," << j << ") = ";
			cin >> mat[i][j];
		}
	}
}

void matrix::display()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << mat[i][j];
			if (j+1!=c)
				cout << ",";
			else
				cout << endl;
		}
	}
}

void matrix::rowechelon()
{

}


matrix::~matrix()
{
}
