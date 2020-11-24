#pragma once
#include <iostream>

#ifndef _ESCAPE_H_
#define _ESCAPE_H_

//한글 제발

class level2 {
private:
	void rest_room();
	void class_room1();
	void class_room2();
protected:
	void rooms2();
public:
	level2() { system("cls"); }

};

class level1 : public level2 {
private:
	void music_room();
	void piano();
	void art_room();
	void teacher_roomO();

public:
	level1() { system("cls"); }
	virtual void rooms1();					//µ¿Àû¹ÙÀÎµù
	void teacher_room();
};

class open : public level1 {
public:
	open();
};

class ending : public level1 {
private:
	void THEend();
public:
	ending();
};

class start : public level1 {
private:
	void school_draw();
	void key_draw();
public:
	start();
};

#endif

