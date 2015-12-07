#include "BaseClass.h"

#include <cstdio>

void BaseClass::vfunc(){
	printf("baseclass virtual function\n");
}

void BaseClass::func(){
	printf("baseclass non-virtual function\n");
}
