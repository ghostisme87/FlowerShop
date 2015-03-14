#ifndef _SHOP_H_
#define _SHOP_H_

#include "Category.h"

class Shop
{
	int m_nCount;
	wchar_t **m_pDLL_Name;
	Category category;
public:
	~Shop();
	bool dll_loader();
	void Run();
};


#endif //_SHOP_H_