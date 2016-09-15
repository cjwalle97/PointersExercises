#include <iostream>

//Consider the following statements :

int main()
{
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;
}
//After these statements, which of the following statements will change the value of i to 75 ?
//A.k = 75;
//B. *k = 75;
//C.p = 75;
//D. *p = 75;
//E.Two or more of the answers will change i to 75.
// D is the correct answer as dereferencing p will cause i to become 75