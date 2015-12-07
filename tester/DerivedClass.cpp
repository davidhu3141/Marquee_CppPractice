#include "DerivedClass.h"

#include <cstdio>

void DerivedClass::vfunc(){
	printf("Derived Class Override Virtual Function\n");
}

void DerivedClass::func(){
	printf("Derived Class Override Non-Virtual Function\n");
}
