#include "Appendable.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Appendable {

public:
	int getWidth();
	int getHeight();
	char** getContent();

};

#endif
