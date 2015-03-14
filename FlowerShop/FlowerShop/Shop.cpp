#include <iostream>
#include "Shop.h"


Shop::~Shop()
{
	if(m_pDLL_Name != nullptr)
	{
		for(int i = 0; i < m_nCount; ++i)
		{
			delete []m_pDLL_Name[i];
		}
		
		delete []m_pDLL_Name;
	}

}


void Shop::Run()
{
	std::cout << "Run()" << std::endl;
	dll_loader();
}


bool Shop::dll_loader()
{
	m_nCount = 0;
	WIN32_FIND_DATA f_data;
	HANDLE hFind;
	hFind = FindFirstFile(L"*.dll", &f_data);
	if(hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			std::wcout << f_data.cFileName << std::endl;
			++m_nCount;
		}while(FindNextFile(hFind, &f_data));

	}
	else
	{
		std::cout << "Cannot find any DLL" << std::endl;
		return false;
	}
	FindClose(hFind);
	int i = 0;
	m_pDLL_Name = new wchar_t*[m_nCount];
	hFind = FindFirstFile(L"*.dll", &f_data);
	if(hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			m_pDLL_Name[i] = new wchar_t[lstrlen(f_data.cFileName)+1];
			lstrcpy(m_pDLL_Name[i++], f_data.cFileName);
		}while(FindNextFile(hFind, &f_data));

	}
	FindClose(hFind);
	for(int i = 0; i < m_nCount; ++i)
	{
		std::wcout << m_pDLL_Name[i] << std::endl;
	}

	return true;
}
