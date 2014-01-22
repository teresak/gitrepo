#include <iostream>
#include <add.h>
#include <multiply.h>
#include <pow.h.

void areEquals(double expected, double got)
{
if (expected !=got)
{
std::cout<< "Expected: "<<expected<< "but got:" <<got<<std::endl;
}
else
{
std::cout <<"Test passed"<< std::endl;
}
}
int main()
{
areEquals(4, add(2,2));
ereEquals(12, multiply(3,4));
areEquals(64, pow(8,2));
areEquals(1, pow(8,0));
return0;
}

