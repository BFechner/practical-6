#include <iostream>
#include <string>
#include "individual.h"

using namespace::std;

individual::individual(int length)
{

	  binaryString;

	for(int i=0;i<length;i++)
	{
		binaryString.append("0");
	}	

	//binaryString 
}

individual::individual(string binaryList)
{
	binaryString = binaryList
}

string individual::getString()
{
	return binaryString;
}