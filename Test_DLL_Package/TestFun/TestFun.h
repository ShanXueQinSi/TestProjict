#include <stdio.h> 

typedef void (__stdcall *FUN_CALLBACK)(int a);
FUN_CALLBACK g_Notify = NULL;

 int __stdcall TestFunAdd(int a, int b, int c);

 int __stdcall TestFunProduct(int a, int b, int c);

 int __stdcall SetBackNotify(FUN_CALLBACK _cbNotify);




