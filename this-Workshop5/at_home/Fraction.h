// Name :- Namra Fanse
// Student ID :- 112219175
// Student Email :- nrfanse@myseneca.ca
// Workshop 5 at_home;

#ifndef SICT_FRACTION_H
#define SICT_FRACTION_H
using namespace std;

namespace sict {

	class Fraction {
    
    private:
    
    int numerator_;
    int denominator_;
    
	public:
	
	Fraction();
	Fraction(int numerator, int denominator);
	
	int max() const;
	int min() const;
	void reduce();
	int gcd() const;
	bool isEmpty() const;
	void display() const;
	bool isValid(const Fraction& f) const;
	
	Fraction operator+(const Fraction& rhs) const;
	Fraction operator*(const Fraction& rhs) const;
	bool operator==(const Fraction& rhs) const;
	bool operator!=(const Fraction& rhs) const;
	Fraction operator+=(const Fraction& rhs);

	};

}
#endif