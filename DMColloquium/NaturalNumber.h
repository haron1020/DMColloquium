#ifndef __DMColloquium__NaturalNumber__
#define __DMColloquium__NaturalNumber__

#include <vector>
#include <iostream>
#include <string>
#include <cmath>

class NaturalNumber {
protected:
    // you must only use first 9 digits of each int.
    // So, if a number is: 12345678901234 than
    // digitBlocks[1] = 12345
    // digitBlocks[0] = 678901234
    std::vector<unsigned int> digitBlocks;
public:
    bool NZER_N_B();
    NaturalNumber();
    NaturalNumber(std::vector<unsigned int> digits):digitBlocks{digits}{};
    NaturalNumber ADD_1N_N();

    // ("23462346234523462346234623")
    friend std::istream& operator>> (std::istream& str, NaturalNumber& number);
    void setDigitsFromString(std::string str);
    NaturalNumber ADD_NN_N(NaturalNumber nat_num_2);
    // put declarations-ONLY for each method below

    int COM_NN_D(NaturalNumber);

};

#endif /* defined(__DMColloquium__NaturalNumber__) */

