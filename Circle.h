#include "Appendable.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Appendable {

public:
	int getWidth();
	int getHeight();
	char** getContent();

};

#endif
