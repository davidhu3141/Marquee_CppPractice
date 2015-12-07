#include "Appendable.h"

#ifndef CROSS_H
#define CROSS_H

class Cross : public Appendable {

public:
	int getWidth();
	int getHeight();
	char** getContent();

};

#endif
