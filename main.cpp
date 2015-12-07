#include "Marquee.h"
#include "Triangle.h"
#include "Circle.h"
#include "Cross.h"

int main(int argc, char* argv[]){

	Marquee marquee(100, "To be or not to be, that's a question.  ");
	marquee.setStartX(50);
	marquee.setStartY(30);

	Triangle triangle;
	marquee.append(triangle);
	marquee.append("  ");

	Circle circle;
	marquee.append(circle);
	marquee.append("  ");

	Cross cross;
	marquee.append(cross);
	marquee.append("  ");

	marquee.showInfinite();

	return 0;

}
