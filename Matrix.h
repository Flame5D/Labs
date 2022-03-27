
#pragma once
using namespace std;

class Matrix
{
protected:
	float** M;
	int rows; // Stroki
	int cols; // Stolbci

public:
	
	void clear(float** a, int n);
	Matrix(); 
    Matrix(int _m, int _n); 

	// 1

	int getRows(); // stroki
	int getCols(); // stolbci
	void change(int n, int m); // menyaem matricu
	float GetElement(int i, int j); // element matrici
	void SetElement(int i, int j, float value); //menyaem ellement
	void Print();//vivod matrici
	Matrix operator +(const Matrix& other);// +
	Matrix operator +(float a);
	Matrix operator -(const Matrix& other);// -
	Matrix operator -(float a);
	Matrix operator *(const Matrix& other);// *
	Matrix operator *(float a);
	Matrix operator =(const Matrix& other);// =
	friend Matrix adamarMult(const Matrix& a, const Matrix& b);
	friend ostream& operator<< (std::ostream& out, Matrix& name);
	friend istream& operator>>(istream& in, Matrix& name);
    float& operator()(int m, int n);//()



	// 2
	float Trace(); // sled
	float Det(); // det
	friend float Scalar(Matrix& a, Matrix& b); // scalar
	float VNorm(); // Norma vektora
	float Norm();  // norma

	
	
	// 3
	friend float angle(Matrix& a, Matrix& b); // ugol
	int rang(); // rang
	void inverse(); // obratnaya
	void transpose(); // transponir
	


	// 4
	void writeBin();
	void readBin();
	friend ostream& operator<< (fstream& f, Matrix& name);
	friend istream& operator>>(fstream& f, Matrix& name);

	

};

class eMatrix :public Matrix{
public:

	eMatrix();
	eMatrix(int _n);

};

class dMatrix: public Matrix {
public:

	dMatrix();
	dMatrix(int _n);
	void dSetElement();
};

class tMatrix : public Matrix {
public:
	bool a =true ;
	tMatrix();
	tMatrix(int _n, bool _a);
	void tSetElement(bool _a);
};

class sMatrix : public Matrix {
public:
	
	sMatrix();
	sMatrix(int _n);
	
};

class MyException1 {};
class MyException2 {};
class MyException3 {};
class MyException4 {};
class MyException5 {};
class MyException6 {};
class MyException7 {};

#include "Matrix.cpp"