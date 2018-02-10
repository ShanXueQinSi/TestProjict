#include <stdio.h> 

#include <Windows.h> 

#include "TestFun.h"

int main(int argc, CHAR* argv[])
{
	int i = TestFunAdd(1,2,9);
	int j = TestFunProduct(1,2,9);

	printf("1+2+9 = %d \n", i);
	printf("1*2*9 = %d \n", j);

	system("pause");
	return 0;
}

