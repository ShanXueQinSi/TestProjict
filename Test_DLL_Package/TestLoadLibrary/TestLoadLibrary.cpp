// TestLoadLibrary.cpp : Defines the entry point for the console application.
//

#include <Windows.h> 
#include <stdio.h> 

//定义回调函数，函数指针
typedef void (__stdcall *FUN_CALLBACK)(int a);

//导出函数
typedef int (__stdcall *TestFunAdd)(int a, int b, int c);
typedef int (__stdcall *TestFunProduct)(int a, int b, int c);
typedef int (__stdcall *SetBackNotify)(FUN_CALLBACK _cbNotify);


void _stdcall CallBack_Print_fun(int a)
{
	printf("Recv result %d \n", a);
}

int main(int argc, CHAR* argv[])
{

	HINSTANCE hinstLib; 
	hinstLib = LoadLibrary(TEXT("TestFun.dll")); 

	TestFunAdd	Fun_Add = NULL;
	TestFunProduct	Fun_Product = NULL;
	SetBackNotify	Fun_SetNotify = NULL;

	Fun_Add              =    (TestFunAdd)GetProcAddress(hinstLib,"TestFunAdd");
	Fun_Product          =    (TestFunProduct)GetProcAddress(hinstLib,"TestFunProduct");
	Fun_SetNotify        =    (SetBackNotify)GetProcAddress(hinstLib,"SetBackNotify");

	Fun_SetNotify(CallBack_Print_fun);

	int i = Fun_Add(1,2,9);
	printf("1+2+9 = %d \n", i);

	int j = Fun_Product(1,2,9);

 	printf("1*2*9 = %d \n", j);

	system("pause");
	return 0;
}

