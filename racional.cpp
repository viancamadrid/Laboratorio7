#include "racional.h"
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>

using std::string;
using std::stringstream;
using std::ostream;
using std::showpos;
using std::noshowpos;
using std::abs;

Racional::Racional(int num, int denom){
	int denominador, numerador;
	if(denom<0 && num<0){
		denominador=abs(denom);
		numerador=abs(num);
		denom=denominador;
		num=numerador;
	}else if(denom<0){
		numerador=-1*num;
		denominador=abs(denom);
		denom=denominador;
		num=numerador;
	}else if(denom==0){
		denom=1;
	}

	//simplificar

	if(num<denom){
		for (int i = 1; i <= num; ++i){
			if(num%i==0 && denom%i==0){
				numerador=num/i;
				denominador=denom/i;
			}
		}
		num=numerador;
		denom=denominador;
	}else{
		for (int i = 1; i <= denom; ++i){
			if(num%i==0 && denom%i==0){
				numerador=num/i;
				denominador=denom/i;
			}
		}
		num=numerador;
		denom=denominador;
	}

	this->num=num;
	this->denom=denom;
}

const Racional& Racional::operator=(const Racional& r){
	num = r.num;
	denom = r.denom;
	return *this;
}

string Racional::toString() const{
	stringstream ss;
	ss<<num<<"/"<<denom;
	return ss.str();
}

const Racional operator+(const Racional& lhs, const Racional& rhs){
	Racional retVal = lhs;
	retVal += rhs;
	return retVal;
}
const Racional operator-(const Racional& lhs, const Racional& rhs){
	Racional retVal = lhs;
	retVal -= rhs;
	return retVal;
}

const Racional Racional::operator-() const{
   return Racional(-num, -denom);
}

const Racional& Racional::operator+=(const Racional& r){
   num += r.num;
   denom += r.denom;
   return *this;
}

const Racional& Racional::operator-=(const Racional& r){
   return *this += -r;
}
/*
const Racional operator*(const Racional& lhs, const Racional& rhs){
	Racional retVal = lhs;
	retVal -= rhs;
	return retVal;
}
const Racional operator/(const Racional& lhs, const Racional& rhs){
	Racional retVal = lhs;
	retVal -= rhs;
	return retVal;
}*/