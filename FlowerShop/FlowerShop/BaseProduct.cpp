#include "BaseProduct.h"

float Product::GetPrice()
{
	return m_fPrice;
}

int Product::GetQuantity()
{
	return m_nQuantity;
}

char* Product::GetName()
{
	return m_cName;
}