
#include "stdafx.h"
#include "TestFun.h"

int __stdcall TestFunAdd(int a, int b, int c)
{
	int iResult = a+b+c;

	g_Notify(iResult);

	return iResult;
}

int __stdcall TestFunProduct(int a, int b, int c)
{
	int iResult = a*b*c;

	g_Notify(iResult);

	return iResult;
}

int __stdcall SetBackNotify(FUN_CALLBACK _cbNotify)
{
	g_Notify = _cbNotify;
	return 0;
}
