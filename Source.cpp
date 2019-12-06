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
	myMatrix.swapRows(2, 2);
	cout << "////////////////////////////////////" << endl;
	myMatrix.display();
	system("pause");
}