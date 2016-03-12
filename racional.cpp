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
using std::cout;

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

const Racional Racional::operator-() const{
   return Racional(-num, -denom);
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

const Racional operator*(const Racional& lhs, const Racional& rhs){
	Racional retVal = lhs;
	retVal *= rhs;
	return retVal;
}
const Racional operator/(const Racional& lhs, const Racional& rhs){
	Racional retVal = lhs;
	retVal /= rhs;
	return retVal;
}

const Racional& Racional::operator+=(const Racional& r){
   num = (r.denom*num + r.num*denom);
   denom *= r.denom;
   simplificar();
   return *this;
}

const Racional& Racional::operator-=(const Racional& r){
   num = (r.denom*num - r.num*denom);
   denom *= r.denom;
   simplificar();
   return *this;
}

const Racional& Racional::operator*=(const Racional& r){
   num*= r.num;
   denom*=r.denom;
   simplificar();
   return *this;
}

const Racional& Racional::operator/=(const Racional& r){
   	num*= r.denom;
   	denom*=r.num;
   	simplificar();
   
   return *this;
}

ostream& operator<<(ostream& output, const Racional& r){
	if(r.denom==1 || r.num==0){
		output<<r.num;
	}else{
		output<<r.num<<"/"<<r.denom;
	}
	return output;	
}

void Racional::simplificar(){
	int denominador, numerador;
	
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
}
