#include <iostream>
#include "matrix.h"
using namespace std;



int main() {
	int rows, columns;
	cout << "ROWS?:";
	cin >> rows;
	cout << "\nCOLUMNS?:";
	cin >> columns;
	matrix myMatrix(rows,columns);
	myMatrix.createMatrix();
	myMatrix.display();

	system("pause");
}