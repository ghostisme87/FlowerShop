#ifndef _BASE_FACTORY_
#define _BASE_FACTORY_

#include "BaseInput.h"

class BaseFactory
{
public:
	BaseFactory() {}
	virtual ~BaseFactory() {}
	virtual BaseInput *Input() = 0;
}


#endif