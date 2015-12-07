#include "Circle.h"

#include <cstdlib>
#include <cstring>

int Circle::getWidth(){
	return 7;
}

int Circle::getHeight(){
	return 3;
}

char** Circle::getContent(){
	char** content = (char**) malloc(3 * sizeof(char*));
	content[0] = (char*) malloc(7);
	content[1] = (char*) malloc(7);
	content[2] = (char*) malloc(7);
	memcpy(content[0], " /^^^\\ ", 7);
	memcpy(content[1], "|     |", 7);
	memcpy(content[2], " \\___/ ", 7);
	return content;
}
