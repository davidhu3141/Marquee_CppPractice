#include "DerivedClass.h"
#include "BaseClass.h"

int main(int argc, char* argv[]){
	BaseClass* p = new DerivedClass();
	p->vfunc();
	p->func();
	return 0;
}
