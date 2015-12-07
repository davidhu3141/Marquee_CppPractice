#include "Marquee.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>

Marquee::Marquee(int width){

	this->width = width;
	this->length = 0;
	this->currentPos = 0;
	this->startX = 0;
	this->startY = 0;

	this->context = (char**) malloc(sizeof(char*) * Marquee::height);
	for(int i = 0; i < Marquee::height; i++){
		this->context[i] = NULL;
	}
}

Marquee::Marquee(int width, const char* content){

	this->width = width;
	this->length = strlen(content);
	this->currentPos = 0;
	this->startX = 0;
	this->startY = 0;

	this->context = (char**) malloc(sizeof(char*) * Marquee::height);
	for(int i = 0; i < Marquee::height; i++){
		this->context[i] = (char*) malloc(sizeof(char) * this->length);
		memset(this->context[i], ' ', this->length);
	}
	memcpy(context[1], content, this->length);
}

Marquee::~Marquee(){}

void Marquee::append(const char* content){

	int len = this->length + strlen(content);

	for(int i = 0; i < Marquee::height; i++){
		this->context[i] = (char*) realloc(this->context[i], sizeof(char) * len);
		memset(this->context[i] + this->length, ' ', strlen(content));
	}
	memcpy(context[1] + this->length, content, strlen(content));
	this->length = len;
}

void Marquee::append(Appendable& appd){

	int len = this->length + appd.getWidth();
	char** content = appd.getContent();

	for(int i = 0; i < Marquee::height; i++){
		this->context[i] = (char*) realloc(this->context[i], sizeof(char) * len);
		memcpy(this->context[i] + this->length, content[i], appd.getWidth());
	}
	this->length = len;
}

void Marquee::show(int time){

	int _width = this->width;

	while (time >= 0) {

		clearScreen();

		for(int i = 0; i < startY; i++) printf("\n");

		for(int i = 0; i < Marquee::height; i++){
			for(int m = 0; m < startX; m++) printf(" ");
			for(int j = 0; j < _width ; j++){
				int x = (j + currentPos) % this->length;
				printf("%c", context[i][x]);
			}
			printf("\n");
		}

		currentPos = (currentPos + 1) % this->length;
		time--;
		sleep(1);
	}
}

void Marquee::showInfinite(){

	int _width = this->width;

	while (1) {

		clearScreen();

		for(int i = 0; i < startY; i++) printf("\n");

		for(int i = 0; i < Marquee::height; i++){
			for(int m = 0; m < startX; m++) printf(" ");
			for(int j = 0; j < _width ; j++){
				int x = (j + currentPos) % this->length;
				printf("%c", context[i][x]);
			}
			printf("\n");
		}

		currentPos = (currentPos + 1) % this->length;
		sleep(1);
	}
}

void Marquee::clearScreen(){
	system("@cls||clear");
}

void Marquee::sleep(int sec){
	for (int i = 0; i < sec; i++) system("sleep 1||timeout /t 1");
}

void Marquee::setStartX(int x){
	this->startX = x;
}

void Marquee::setStartY(int y){
	this->startY = y;
}

