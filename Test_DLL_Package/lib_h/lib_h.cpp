// lib_h.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <Windows.h> 

#include "TestFun.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int i = TestFunAdd(1,2,9);
	int j = TestFunProduct(1,2,9);

	printf("1+2+9 = %d \n", i);
	printf("1*2*9 = %d \n", j);

	system("pause");
	return 0;
}

