#include "Appendable.h"

#ifndef MARQUEE_H
#define MARQUEE_H

class Marquee {

public:
	Marquee(int);
	Marquee(int, const char*);

	void append(const char*);
	void append(Appendable&);
	void show(int);
	void showInfinite();

	int getwidth();
	int setWidth(int);
	int getHeight();
	int getContext();
	int getCurrentPos();
	void setStartX(int);
	void setStartY(int);

	~Marquee();

private:
	char **context;
	char length;
	int width;
	int startX;
	int startY;
	const static int height = 3;
	static void clearScreen();
	static void sleep(int);
	int currentPos;
};

#endif
