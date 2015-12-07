#ifndef APPENDABLE_H
#define APPENDABLE_H

class Appendable {

public:
	virtual char** getContent() = 0;
	virtual int getWidth() = 0;
	virtual int getHeight() = 0;
};

#endif
