// Alive.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Alive.h"


// This is an example of an exported variable
ALIVE_API int nAlive=0;

// This is an example of an exported function.
ALIVE_API int fnAlive(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Alive.h for the class definition
CAlive::CAlive()
{
	return;
}
