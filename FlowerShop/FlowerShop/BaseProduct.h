#ifndef _BASE_PRODUCT_
#define _BASE_PRODUCT_

class Product
{
protected:
	enum { NAME = 30 };
	char m_cName[NAME];
	int m_nQuantity;
	float m_fPrice;
public:
	Product() {}
	virtual ~Product() {}
	virtual float GetPrice();
	virtual int GetQuantity();
	virtual char* GetName();
};


#endif //_BASE_PRODUCT_