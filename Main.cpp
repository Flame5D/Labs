#include <iostream>
#include "Matrix.h"



int main() {
	system("chcp 1251");
	system("cls");

	// 1

	Matrix a(3, 3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a.SetElement(i, j, 7);
		}
	}


	Matrix b(3, 3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b.SetElement(i, j, 2);
		}
	}


	cout << "A" << endl;
	a.Print();
	cout << endl;

	cout << "B" << endl;
	b.Print();
	cout << endl;

	cout << "A+B" << endl;
	Matrix c(3, 3);
	c = a + b;
	cout << c << endl;

	cout << "A-B" << endl;
	c = a - b;
	cout << c << endl;

	cout << "Adamar" << endl;
	Matrix s(3,3);
	s = adamarMult(a, b);
	cout << s << endl;

	cout << "B*A" << endl;
	c = b * a;
	cout << c << endl;


	

	cout << "B menyaem" << endl;
	b.change(3, 1);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			b.SetElement(i, j, i+1);
		}
	}
	b.Print();
	cout << endl;

	cout << "A*B" << endl;
	c.change(3, 1);
	c = a * b;
	cout << c << endl;

	cout << "A-3" << endl;
	a = a - 3;
	cout << a << endl;
	
	cout << "B*2" << endl;
	b = b * 2;
	cout<< b <<endl;

	cout << "Edin" << endl;
	eMatrix a1(4);
	cout << a1 << endl;

	cout << "Diag" << endl;
	dMatrix a2(3);
	cout << a2 << endl;
	
	cout << "Triagne up" << endl;
	tMatrix a3(6,true);
	cout << a3 << endl;
	
	cout << "Triange Down" << endl;
	tMatrix a4(6, false);
	cout << a4 << endl;
	
	cout << "Sym" << endl;
	sMatrix a5(5);
	cout << a5 << endl;
	



	//2

	cout << "s1" << endl;
	Matrix s1(5, 5);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			s1.SetElement(i, j, i+j*j+1);
		}
	}

	s1.Print();
	cout << endl;

	cout << "Trace(s1)" << endl;
	float f = s1.Trace();
	cout << f << endl;
	cout << endl;

	Matrix s2(3, 3);

	s2.SetElement(0, 0, 1);
	s2.SetElement(0, 1, 2);
	s2.SetElement(0, 2, 3);

	s2.SetElement(1, 0, 4);
	s2.SetElement(1, 1, 5);
	s2.SetElement(1, 2, 6);

	s2.SetElement(2, 0, 7);
	s2.SetElement(2, 1, 8);
	s2.SetElement(2, 2, 9);

	cout << "s2" << endl;
	s2.Print();
	cout << endl;
	cout << "Det(s2)" << endl;
	f = s2.Det();
	cout << f << endl;
	cout << endl;

	 Matrix v1(2, 1);
	 Matrix v2(2, 1);

	 v1.SetElement(0, 0, 1); 
	 v1.SetElement(1, 0, 0);
	 v2.SetElement(0, 0, 1); 
	 v2.SetElement(1, 0, 1);

	 cout << "v1" << endl;
	 v1.Print();
	 cout << endl;
	 cout << "v2" << endl;
	 v2.Print();
	 cout << endl;
	 cout << "scalar (v1,v2)" << endl;
	 float q;
	 q = Scalar(v1, v2);
	 cout << q << endl;
	 cout << endl;


	 cout << "Norm(s1)" << endl;
	 f = s1.Norm();
	 cout << s1 << endl;
	 cout << f << endl;
	 cout << endl;

	 //3

	 cout << "ugol v radianah" << endl;
	 float angl = angle(v1, v2);
	 cout << angl << endl;
	 cout << endl;


	 cout << "RG" << endl;
	 sMatrix rg(3);
	 rg.Print();
	 cout << "Rang (RG)" << endl;
	int r = rg.rang();
	cout << r << endl;
	cout << endl;

	 cout << "inverse" << endl;
	 
	 Matrix i1(3, 3);

	i1.SetElement(0, 0, 1);
	i1.SetElement(0, 1, 3);
	i1.SetElement(0, 2, 3);

	i1.SetElement(1, 0, 4);
	i1.SetElement(1, 1, 4);
	i1.SetElement(1, 2, 6);

	i1.SetElement(2, 0, 7);
	i1.SetElement(2, 1, 8);
	i1.SetElement(2, 2, 7);
	cout << i1 << endl;
	i1.inverse();
    cout << i1 << endl;

	Matrix i2(3, 3);
	
	i2.SetElement(0, 0, 1);
	i2.SetElement(0, 1, 3);
	i2.SetElement(0, 2, 3);

	i2.SetElement(1, 0, 4);
	i2.SetElement(1, 1, 4);
	i2.SetElement(1, 2, 6);

	i2.SetElement(2, 0, 7);
	i2.SetElement(2, 1, 8);
	i2.SetElement(2, 2, 7); 

	Matrix i3(3, 3);
	i3 = i1 * i2;
	cout << "proverka" << endl;
	cout << i3 << endl;

	 cout << "Transpon" << endl;

	 i1.transpose();
	 cout << i1 << endl;

	 Matrix i4(2, 3);
	 i4.SetElement(0, 0, 1);
	 i4.SetElement(0, 1, 3);
	 i4.SetElement(0, 2, 3);

	 i4.SetElement(1, 0, 4);
	 i4.SetElement(1, 1, 4);
	 i4.SetElement(1, 2, 6);

	 cout << i4 << endl;

	 i4.transpose();
	 cout << i4 << endl;
	 // 4
	 cout << "Bin" << endl;
	 a.change(5, 5);
	 for (int i = 0; i < 5; i++) {
		 for (int j = 0; j < 5; j++) {
			 a.SetElement(i, j, 25);
		 }
	 }

	 
	 Matrix read;
	 Matrix readtxt;

	 a.writeBin();
	 read.readBin();

	 cout << read << endl;

	
	 fstream h;
	 
	 // h >> a; 

	 h << readtxt; 



	 cout << "Txt" << endl;
	 cout << readtxt;



	return 0;
}
