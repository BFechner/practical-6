#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <string>

using namespace::std;

class individual {
private:


public:
individual(int length);

individual(string binaryList);

string binaryString;

string getString();

int getBir(int pos);

void flipBit(int pos);

int getMaxOnes();

int getLength();

};


#endif