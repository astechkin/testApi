// testApi.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "testApi.h"

#include <iostream>
#include <fstream>

using namespace std;

ofstream Log("testapi.log");

using namespace std;

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
			Log << "TestApi Process attached";
			break;
		case DLL_THREAD_ATTACH:
			Log << "TestApi Thread attached";
			break;
		case DLL_THREAD_DETACH:
			Log << "TestApi Thread detached";
			break;
		case DLL_PROCESS_DETACH:
			Log << "TestApi Process detached";
			break;
    }
    return TRUE;
}

BOOL _stdcall Initialize()
{
	Log << "TestApi Initialize" << endl;
	return TRUE;
}
BOOL _stdcall Uninitialize()
{
	Log << "TestApi Uninitialize";
	return TRUE;
}

BOOL _stdcall CreateRow	(const char* szName)
{
	Log << "CreateRow " << szName << endl;
	return TRUE;
}
BOOL _stdcall AddString(const char* szFieldName, const char* szValue)
{
	Log << "     AddString   " << szFieldName << "(" << szValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddDate(const char* szFieldName, const char* szValue)
{
	Log << "     AddDate     " << szFieldName << "(" << szValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddTime(const char* szFieldName, const char* szValue)
{
	Log << "     AddTime     " << szFieldName << "(" << szValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddDateTime(const char* szFieldName, const char* szValue)
{
	Log << "     AddDateTime " << szFieldName << "(" << szValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddDouble(const char* szFieldName, double dblValue)
{
	Log << "     AddDouble   " << szFieldName << "("  << dblValue  << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddInteger(const char* szFieldName, int iValue)
{
	Log << "     AddInteger  " << szFieldName << "(" << iValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddInteger64(const char* szFieldName, __int64 iValue)
{
	Log << "     AddInteger64  " << szFieldName << "(" << iValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall AddUInteger64(const char* szFieldName, unsigned __int64 iValue)
{
	Log << "     AddUInteger64  " << szFieldName << "(" << iValue << ")" << endl;
	return TRUE;
}
BOOL _stdcall InsertRow()
{
	Log << "InsertRow" << endl;
	return TRUE;
}
BOOL _stdcall DeleteRow()
{
	Log << "DeleteRow" << endl;
	return TRUE;
}
BOOL _stdcall ClearTable(const char* szName)
{
	Log << "ClearTable " << szName << endl;
	return TRUE;
}
