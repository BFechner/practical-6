#include  <iostream>
#include "individual.h"
#include "string"
#include "mutator.h"

using namespace::std;

int main(void){

	individual a(5);

	cout << a.getString() << endl;

	return 0;
}