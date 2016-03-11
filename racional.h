#pragma once
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Racional{
	int num, denom;
public:
	explicit Racional(int=0, int=0);
	string toString()const;
	const Racional& operator=(const Racional&);
	const Racional operator-() const;
	const Racional& operator+=(const Racional&);
	const Racional& operator-=(const Racional&);
	friend ostream& operator<<(ostream&, const Racional&);	
};

const Racional operator+(const Racional&, const Racional&);
const Racional operator-(const Racional&, const Racional&);
const Racional operator*(const Racional&, const Racional&);
const Racional operator/(const Racional&, const Racional&);