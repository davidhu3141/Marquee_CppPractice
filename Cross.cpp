#include "Cross.h"

#include <cstdlib>
#include <cstring>

int Cross::getWidth(){
	return 5;
}

int Cross::getHeight(){
	return 3;
}

char** Cross::getContent(){
	char** content = (char**) malloc(3 * sizeof(char*));
	content[0] = (char*) malloc(5);
	content[1] = (char*) malloc(5);
	content[2] = (char*) malloc(5);
	memcpy(content[0], "^\\ /^", 5);
	memcpy(content[1], "  .  ", 5);
	memcpy(content[2], "./ \\.", 5);
	return content;
}
