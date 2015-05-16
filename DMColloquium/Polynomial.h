//
//  Polynomial.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "RationalNumber.h"
#include <string>
#include <sstream>

#ifndef __DMColloquium__Polynomial__
#define __DMColloquium__Polynomial__

class Polynomial {
private:
    std::vector<RationalNumber> coefficients;
public:
    Polynomial();
    Polynomial(std::vector<RationalNumber> coeff):coefficients{coeff}{};
    // RationalNumber objects separated by comma ("1235/12341, 234623452345/23462346, -23452346/23462346523456")
    friend std::istream& operator>> (std::istream& str, Polynomial& polinom);
    friend std::ostream& operator<< (std::ostream& str, const Polynomial& polinom);
    RationalNumber LED_P_Z();

	Polynomial SUB_PP_P(Polynomial SecondPoly);
};

#endif /* defined(__DMColloquium__Polynomial__) */ 

