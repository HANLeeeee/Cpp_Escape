#include <iostream>
#include <conio.h>
using namespace std;

#include "헤더.h"	

#define Enter 13

void level2::rooms2() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				2층에 도착 " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				2층 방을 둘러보자" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶화장실" << endl;
			cout << "				  교실1" << endl;
			cout << "				  교실2" << endl;
			cout << "				  1층으로 다시 내려가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  화장실" << endl;
			cout << "				▶교실1" << endl;
			cout << "				  교실2" << endl;
			cout << "				  1층으로 다시 내려가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  화장실" << endl;
			cout << "				  교실1" << endl;
			cout << "				▶교실2" << endl;
			cout << "				  1층으로 다시 내려가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  화장실" << endl;
			cout << "				  교실1" << endl;
			cout << "				  교실2" << endl;
			cout << "				▶1층으로 다시 내려가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}


		ch = _getch();
		if (ch == 80) {							  //아래로 내라기
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {					  //위로 올리기
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0)      //화장실들어가기
			rest_room();

		else if (ch == Enter && select == 1)      //교실1 들어가기
			class_room1();

		else if (ch == Enter && select == 2)      //교실2 들어가기
			class_room2();

		else if (ch == Enter && select == 3)      //1층으로 내려가기
			open();
	}

}

void level2::rest_room() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				거울에 무언가 있다 " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶자세히 본다" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  자세히 본다" << endl;
			cout << "				▶그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == 72) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == Enter && select == 0) { //화장실거울보기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				글자가 있네...?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl;
			cout << "				■■■■       ■■■■" << endl;
			cout << "				■      ■    ■      ■" << endl;
			cout << "				■       ■   ■      ■" << endl;
			cout << "				■■■■■    ■      ■" << endl;
			cout << "				■    ■      ■      ■" << endl;
			cout << "				■     ■     ■      ■" << endl;
			cout << "				■      ■    ■      ■" << endl;
			cout << "				■       ■    ■■■■" << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");

		}
		else if (ch == Enter && select == 1)    //화장실나가기
			break;
	}
}

void level2::class_room1() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				빈공책과 그 옆에 연필이...? " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");

		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶연필로 색칠해보기" << endl;
			cout << "				  연필로 방명록 남기기" << endl;
			cout << "				  무시하고 교실1에서 나가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  연필로 색칠해보기" << endl;
			cout << "				▶연필로 방명록 남기기" << endl;
			cout << "				  무시하고 교실1에서 나가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  연필로 색칠해보기" << endl;
			cout << "				  연필로 방명록 남기기" << endl;
			cout << "				▶무시하고 교실1에서 나가기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 2) select = 0;
			else select++;
		}
		else if (ch == 72) {
			if (select == 0) select = 2;
			else select--;
		}
		else if (ch == Enter && select == 0) {   //연필로 칠해보기 
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				아니..! 숨겨진 글자가...!" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl;
			cout << "				■■■■■  ■■■■■" << endl;
			cout << "				■          ■        " << endl;
			cout << "				■          ■        " << endl;
			cout << "				■■■■■  ■■■■■" << endl;
			cout << "				        ■  ■        " << endl;
			cout << "				        ■  ■        " << endl;
			cout << "				■■■■■  ■■■■■" << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
		}
		else if (ch == Enter && select == 1) {   //연필로 방명록 남겨보기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				내 이름을 적었더니..." << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				으악...." << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "gameover" << endl;
			exit(0);
		}
		else if (ch == Enter && select == 2) {
			break;
		}
	}
}

void level2::class_room2() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				잠겨있는 수상한 사물함 발견" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause"); system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				풀어볼까?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶비밀번호를 입력해본다" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  비밀번호를 입력해본다" << endl;
			cout << "				▶그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == 72) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == Enter && select == 0) {    //비밀번호입력
			system("cls");
			char password2[4];
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				비밀번호를 입력하세요 (대문자로)" << endl << "				비번입력->"; cin >> password2;
			cout << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			if (strcmp(password2, "ROSE") == 0) {
				system("cls");
				cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				사물함을 열었다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause"); system("cls");
				cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				열쇠가 있네...뭔가..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause"); system("cls");
				cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				밖으로 나갈 수 있을거 같아..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause");
				ending();
			}
		}
		else if (ch == Enter && select == 1)    //나가기
			break;

	}

}

void level1::rooms1() {
	system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶음악실" << endl;
			cout << "				  미술실" << endl;
			cout << "				  교장실" << endl;
			cout << "				  교무실" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  음악실" << endl;
			cout << "				▶미술실" << endl;
			cout << "				  교장실" << endl;
			cout << "				  교무실" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  음악실" << endl;
			cout << "				  미술실" << endl;
			cout << "				▶교장실" << endl;
			cout << "				  교무실" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  음악실" << endl;
			cout << "				  미술실" << endl;
			cout << "				  교장실" << endl;
			cout << "				▶교무실" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {                      //아래로 내라기
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {                 //위로 올리기
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0)      //음악실들어가기
			music_room();

		else if (ch == Enter && select == 1)      //미술실들어가기
			art_room();

		else if (ch == Enter && select == 2) {     //교장실들어가기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				잠겨있음" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
			system("pause"); system("cls");
		}

		else if (ch == Enter && select == 3)      //교무실들어가기
			teacher_room();

	}

}

void level1::music_room() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl;
	cout << "            ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	cout << "           ㅣ       ■■      ■■       ㅣ      ■■      ■■      ■■      ㅣ" << endl;
	cout << "           ㅣ       ■■      ■■       ㅣ      ■■      ■■      ■■      ㅣ" << endl;
	cout << "           ㅣ       ■■      ■■       ㅣ      ■■      ■■      ■■      ㅣ" << endl;
	cout << "           ㅣ       ■■      ■■       ㅣ      ■■      ■■      ■■      ㅣ" << endl;
	cout << "           ㅣ       ■■      ■■       ㅣ      ■■      ■■      ■■      ㅣ" << endl;
	cout << "           ㅣ        ㅣ        ㅣ        ㅣ        ㅣ       ㅣ        ㅣ       ㅣ" << endl;
	cout << "           ㅣ        ㅣ        ㅣ        ㅣ        ㅣ       ㅣ        ㅣ       ㅣ" << endl;
	cout << "           ㅣ        ㅣ        ㅣ        ㅣ        ㅣ       ㅣ        ㅣ       ㅣ" << endl;
	cout << "           ㅣ        ㅣ        ㅣ        ㅣ        ㅣ       ㅣ        ㅣ       ㅣ" << endl;
	cout << "           ㅣ        ㅣ        ㅣ        ㅣ        ㅣ       ㅣ        ㅣ       ㅣ" << endl;
	cout << "            ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶자세히 본다" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  자세히 본다" << endl;
			cout << "				▶그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == 72) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == Enter && select == 0)   //피아노악보보기
			piano();

		else if (ch == Enter && select == 1)    //음악실나가기
			break;
	}
}

void level1::piano() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				악보가 있네...?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				Q : 미 + 레 + 시 + 라 = ? " << endl << "				(이 힌트는 앞자리)" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
}

void level1::art_room() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl;
	cout << "	                         ■■" << endl;
	cout << "	                       ■    ■" << endl;
	cout << "	                       ■    ■" << endl;
	cout << "	                        ■  ■ " << endl;
	cout << "	                       ■    ■ " << endl;
	cout << "	                       ■    ■" << endl;
	cout << "	                       ■    ■ " << endl;
	cout << "	                       ■    ■ " << endl;
	cout << "	                       ■■■■" << endl << endl << endl << endl << endl;
	cout << "				석고상이 있네 .. ? " << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause"); system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl;
	cout << "	                             ■■" << endl;
	cout << "	                         ■■■■■■" << endl;
	cout << "	                         ■        ■" << endl;
	cout << "	                         ■        ■" << endl;
	cout << "	                         ■■■■■■" << endl;
	cout << "	                             ■■" << endl;
	cout << "	                             ■■" << endl;
	cout << "	                             ■■" << endl;
	cout << "	                             ■■" << endl << endl << endl << endl << endl;
	cout << "				망치를 발견....! " << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause"); system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶석고상을 살살 쳐본다" << endl;
			cout << "				  석고상을 세게 쳐본다" << endl;
			cout << "				  나를 한번 쳐본다" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  석고상을 살살 쳐본다" << endl;
			cout << "				▶석고상을 세게 쳐본다" << endl;
			cout << "				  나를 한번 쳐본다" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  석고상을 살살 쳐본다" << endl;
			cout << "				  석고상을 세게 쳐본다" << endl;
			cout << "				▶나를 한번 쳐본다" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  석고상을 살살 쳐본다" << endl;
			cout << "				  석고상을 세게 쳐본다" << endl;
			cout << "				  나를 한번 쳐본다" << endl;
			cout << "				▶그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}


		ch = _getch();
		if (ch == 80) {
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0) {   //살살침
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				너무 살살쳤잖아 ..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}

		else if (ch == Enter && select == 1) {   //세게침
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				번호를 발견" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl;
			cout << "				■■■■■■■■" << endl;
			cout << "				■" << endl;
			cout << "				■■■■■■■" << endl;
			cout << "				              ■ " << endl;
			cout << "				               ■" << endl;
			cout << "				               ■" << endl;
			cout << "				              ■" << endl;
			cout << "				■■■■■■■" << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
		}

		else if (ch == Enter && select == 2) {   //날 침
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				퍽....." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl; system("pause"); system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				으악...." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");

			cout << "gameover" << endl;
			exit(0);
		}

		else if (ch == Enter && select == 3) {   //살살침
			break;
		}
	}
}

void level1::teacher_room() {
	int password;
	while (1) {
		system("cls");
		cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "				비밀번호가 필ㅇ됴해..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		system("pause"); system("cls");
		cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "				비밀번호를 입력하시요 -3자리 (순서 : 음악실, 미술실) " << endl << "				비번입력->";
		cin >> password;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
		if (password == 185)
			teacher_roomO();
		else {
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				비밀번호가 틀렷자나" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
			break;
		}
	}
}

void level1::teacher_roomO() {
	system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				교무실열림" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				교탁에 열쇠 발견 " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶줍기" << endl;
			cout << "				  그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  줍기" << endl;
			cout << "				▶그냥 간다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == 72) {
			if (select == 0) select = 1;
			else select = 0;
		}
		else if (ch == Enter && select == 0) { //2층으로가기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << endl << "				2층으로 가는 열쇠를 획득했다" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
			open();
		}

		else if (ch == Enter && select == 1)    //나가기
			rooms1();
	}
}

open::open() {
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶1층 둘러보기" << endl;
			cout << "				  2층으로 가는 계단" << endl;
			cout << "				  나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1층 둘러보기" << endl;
			cout << "				▶2층으로 가는 계단" << endl;
			cout << "				  나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1층 둘러보기" << endl;
			cout << "				  2층으로 가는 계단" << endl;
			cout << "				▶나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 2) select = 0;
			else select++;
		}

		else if (ch == 72) {
			if (select == 0) select = 2;
			else select--;
		}
		else if (ch == Enter && select == 0)     //1층둘러보러가기
			rooms1();

		else if (ch == Enter && select == 1) {  //2층으로올라가기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl;
			cout << "				                   ■■■" << endl;
			cout << "				                   ■" << endl;
			cout << "				             ■■■■" << endl;
			cout << "				             ■" << endl;
			cout << "				       ■■■■" << endl;
			cout << "				       ■" << endl;
			cout << "				 ■■■■" << endl;
			cout << "				 ■		뚜벅...뚜벅뚜벅..." << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");

			rooms2();
		}
		else if (ch == Enter && select == 2) {    //나가기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				쿵쿵...! 쾅쾅...! 살려주세요....!" << endl << endl;
			cout << "				아무도 없는 듯... 열쇠를 찾아봐야지..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
			system("pause");
		}
	}
}

ending::ending() {
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶1층 둘러보기" << endl;
			cout << "				  2층으로 가는 계단" << endl;
			cout << "				  나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1층 둘러보기" << endl;
			cout << "				▶2층으로 가는 계단" << endl;
			cout << "				  나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1층 둘러보기" << endl;
			cout << "				  2층으로 가는 계단" << endl;
			cout << "				▶나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 2) select = 0;
			else select++;
		}

		else if (ch == 72) {
			if (select == 0) select = 2;
			else select--;
		}
		else if (ch == Enter && select == 0)     //1층둘러보러가기
			rooms1();

		else if (ch == Enter && select == 1)    //2층으로올라가기
			rooms2();

		else if (ch == Enter && select == 2) {    //나가기
			THEend();
			system("pause");
		}
	}
}

void ending::THEend() {

	system("cls");
	cout << "" << endl << endl << endl << endl;
	cout << " 		■■■■■■■■■■■■" << endl;
	cout << " 		■■		       ■" << endl;
	cout << " 		■   ■		       ■" << endl;
	cout << " 		■	 ■	       ■               ■■" << endl;
	cout << " 		■	     ■	       ■             ■    ■" << endl;
	cout << " 		■	        ■     ■            ■      ■    ■ " << endl;
	cout << " 		■		■     ■             ■    ■    ■  " << endl;
	cout << " 		■		■     ■              ■■      ■" << endl;
	cout << " 		■		■     ■       ■■■■■■■■■" << endl;
	cout << " 		■		■     ■      ■     ■■     " << endl;
	cout << " 		■		■     ■     ■     ■■       " << endl;
	cout << " 		■	        ■     ■    ■     ■■" << endl;
	cout << " 		■		■     ■          ■■■" << endl;
	cout << " 		■	     ● ■     ■          ■    ■" << endl;
	cout << " 		■		■     ■  ■■■■■     ■   " << endl;
	cout << " 		■		■     ■                  ■" << endl;
	cout << " 		■		■     ■                   ■" << endl;
	cout << " 		  ■		■■■■                     ■" << endl;
	cout << " 		     ■	        ■" << endl;
	cout << " 			 ■     ■" << endl;
	cout << " 			     ■ ■" << endl;
	cout << " 				■	" << endl << endl << endl;
	cout << "" << endl << endl << endl << endl;
	cout << "                                  탈  출  성  공";
	cout << "" << endl << endl << endl << endl;

	exit(0);
}

start::start() {
	cout << "" << endl << endl;
	cout << "	 ■■■■■■  ■■■■■■    ■■■■■        ■          ■■■■■■  ■■■■■■" << endl;
	cout << "	 ■            ■             ■               ■  ■        ■        ■  ■" << endl;
	cout << "	 ■            ■            ■               ■    ■       ■        ■  ■" << endl;
	cout << "	 ■■■■■■  ■■■■■■  ■              ■■■■■      ■■■■■■  ■■■■■■" << endl;
	cout << "	 ■                      ■  ■             ■         ■    ■            ■" << endl;
	cout << "	 ■                      ■   ■           ■           ■   ■            ■" << endl;
	cout << "	 ■■■■■■  ■■■■■■    ■■■■■ ■             ■  ■            ■■■■■■" << endl << endl << endl << endl;
	cout << "			 		■■■■■■■■" << endl;
	cout << "			 		■■          ■" << endl;
	cout << "			 		■   ■       ■" << endl;
	cout << "			 		■      ■    ■" << endl;
	cout << "			 		■         ■ ■" << endl;
	cout << "			 		■         ■ ■" << endl;
	cout << "			 		■         ■ ■" << endl;
	cout << "			 		■         ■ ■" << endl;
	cout << "			 		■         ■ ■" << endl;
	cout << "			 		■       ●■ ■" << endl;
	cout << "			 		■         ■ ■" << endl;
	cout << "				          ■       ■ ■" << endl;
	cout << "			                     ■    ■ ■" << endl;
	cout << "			                        ■ ■ " << endl;
	cout << "		 				   ■" << endl << endl << endl;
	system("pause"); system("cls");

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				조작법 : 방향키 & Enter" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause"); system("cls");

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	school_draw();
	cout << "				눈떠보니 학교였다..." << endl << endl << endl;
	cout << "				문이 잠겨있다..." << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause"); system("cls");

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	key_draw();
	cout << "				열쇠가 필요하다..." << endl << endl << endl;
	cout << "				주위를 둘러보자..." << endl;
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	system("pause");


	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				▶1층 둘러보기" << endl;
			cout << "				  2층으로 가는 계단" << endl;
			cout << "				  나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ";
		}
		else if (select == 1) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1층 둘러보기" << endl;
			cout << "				▶2층으로 가는 계단" << endl;
			cout << "				  나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1층 둘러보기" << endl;
			cout << "				  2층으로 가는 계단" << endl;
			cout << "				▶나가보기" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {
			if (select == 2) select = 0;
			else select++;
		}

		else if (ch == 72) {
			if (select == 0) select = 2;
			else select--;
		}
		else if (ch == Enter && select == 0)    //1층둘러보러가기
			break;

		else if (ch == Enter && select == 1) {  //2층으로올라가기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				덜컹덜컹..흔들흔들..." << endl << endl << endl;
			cout << "				문이 잠겨있네.. 열쇠가 필요한거 같다" << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}

		else if (ch == Enter && select == 2) {    //나가기
			system("cls");
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				쿵쿵...! 쾅쾅...! 살려주세요....!" << endl << endl;
			cout << "				아무도 없는 듯... 열쇠를 찾아봐야지..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}
	}
}

void start::school_draw() {
	cout << endl << endl;
	cout << "	                          ■■" << endl;
	cout << "	                        ■■■■" << endl;
	cout << "	                     ■■■■■■■" << endl;
	cout << "	                       ■□□□■" << endl;
	cout << "	                       ■□□□■" << endl;
	cout << "	                       ■□□□■" << endl;
	cout << "	     ■                ■□□□■                          ■" << endl;
	cout << "	    ■■               ■■■■■                         ■■" << endl;
	cout << "	   ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "	   ■□□■■□□■■□□■■■□□■■□□■■□□■■□□■■" << endl;
	cout << "	   ■□□■■□□■■□□■■■□□■■□□■■□□■■□□■■" << endl;
	cout << "	   ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "	   ■■■■■■■■■■■□□□■■■■■■■■■■■■■■■■" << endl;
	cout << "	   ■□□■■□□■■■■□□□■■■■□□■■□□■■□□■■" << endl;
	cout << "	   ■□□■■□□■■■■□□□■■■■□□■■□□■■□□■■" << endl;
	cout << "	   ■■■■■■■■■■■□□□■■■■■■■■■■■■■■■■" << endl;
	cout << "	   ■■■■■■■■■■■□□□■■■■■■■■■■■■■■■■" << endl << endl << endl;

}

void start::key_draw() {
	cout << endl << endl;
	cout << "				  ■" << endl;
	cout << "				■■■" << endl;
	cout << "			      ■■  ■■" << endl;
	cout << "			    ■■      ■■" << endl;
	cout << "			  ■■          ■■" << endl;
	cout << "                            ■■     ■■" << endl;
	cout << "			      ■■  ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■" << endl;
	cout << "				 ■■" << endl;
	cout << "				 ■■" << endl;
	cout << "				  ■" << endl << endl << endl;
}