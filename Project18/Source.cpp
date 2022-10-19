


#include <iostream>

using namespace std;

// Task 1:
//
//
//class Fraction {
//private:
//	int numerator; // suret
//	int denominator; // mexrec
//public:
//	void init(int num, int don) {
//		numerator = num;
//		denominator = don;
//	};
//	Fraction Multiply(const Fraction& other) {
//		Fraction f;
//		f.numerator = this->numerator * other.numerator;
//		f.denominator = this->denominator * other.denominator;
//		return f;
//	}; // Kesri kesre vurub yeni kesr qaytarir
//
//	Fraction Add(const Fraction& other) {
//		Fraction f;
//		f.denominator = this->denominator * other.denominator;
//
//		f.numerator = (this->denominator * other.denominator) / this->denominator * this->numerator + (this->denominator * other.denominator) / other.denominator * other.numerator;
//		
//		return f;
//	} // Kesri kesrle toplayib yeni kesr qaytarir
//
//	Fraction Minus(const Fraction& other) {
//		Fraction f;
//		f.denominator = this->denominator * other.denominator;
//		f.numerator = (this->denominator * other.denominator) / this->denominator * this->numerator - (this->denominator * other.denominator) / other.denominator * other.numerator;
//
//		return f;
//	} // Kesri kesrden chixib yeni kesr qaytarir
//	Fraction Divide(const Fraction& other) {
//		Fraction f;
//		f.denominator = this->denominator * other.numerator;
//		f.numerator = this->numerator * other.denominator;
//		return f;
//	} // Kesri kesre bolub yeni kesr qaytarir
//
//	void Simplify(Fraction& other){
//		
//		int a;
//		int b;
//		int i;
//		bool check = true;
//		a = other.numerator;
//		b = other.denominator;
//		i = a > b ? b : a;
//		while (true)
//		{
//			if (a % i == 0 && b% i == 0)
//				break;
//			if (i < 2) {
//				check = false;
//				break;
//			}
//			i--;
//		}
//		while (a % i == 0 && b % i == 0 && check) {
//			a /= i;
//			b /= i;
//		}
//		other.numerator = a;
//		other.denominator = b;
//	} // Kesri ixtisar edir
//	void print() {
//		cout << numerator << "/" << denominator << endl;
//	}
//};
//
//
//int main() {
//
//	Fraction f1;
//	f1.init(4, 6);
//	Fraction f2;
//	f2.init(3, 7);
//	Fraction result = f1.Multiply(f2);
//	result.Simplify(result);
//	result.print();
//
//	Fraction result1 = f1.Add(f2);
//	result1.Simplify(result1);
//	result1.print();
//
//	Fraction result2 = f1.Minus(f2);
//	result2.Simplify(result2);
//	result2.print();
//
//	Fraction result3 = f1.Divide(f2);
//	result3.Simplify(result3);
//	result3.print();
//
//
//}
//
//



//// Task 2:
//Point class yazilsin
//x, y fieldleri olsun ve her bir field uchun getter setterler yazilsin.
//constructor parametric, default
//Print method - u yazilsin

class Point {
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		SetX(x);
		SetY(y);
	}
	int GetX() { return x; }
	int GetY() { return y; }

	void SetX(int x) {
		this->x = x;
	}

	void SetY(int y) {
		this->y = y;
	}

	void print() {
		cout << "x : " << x << endl << "y : " << y << endl;
	}
};

int main() {
	Point c(2, 3);
	c.print();
}