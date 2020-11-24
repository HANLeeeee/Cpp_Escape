#include <iostream>
#include <conio.h>
using namespace std;
//
#include "渦.h"	

#define Enter 13

void level2::rooms2() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				2類縑 紫雜 " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				2類 寞擊 萃楝爾濠" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ濰褒" << endl;
			cout << "				  掖褒1" << endl;
			cout << "				  掖褒2" << endl;
			cout << "				  1類戲煎 棻衛 頂溥陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  濰褒" << endl;
			cout << "				Ⅱ掖褒1" << endl;
			cout << "				  掖褒2" << endl;
			cout << "				  1類戲煎 棻衛 頂溥陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  濰褒" << endl;
			cout << "				  掖褒1" << endl;
			cout << "				Ⅱ掖褒2" << endl;
			cout << "				  1類戲煎 棻衛 頂溥陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  濰褒" << endl;
			cout << "				  掖褒1" << endl;
			cout << "				  掖褒2" << endl;
			cout << "				Ⅱ1類戲煎 棻衛 頂溥陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}


		ch = _getch();
		if (ch == 80) {							  //嬴楚煎 頂塭晦
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {					  //嬪煎 螢葬晦
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0)      //濰褒菟橫陛晦
			rest_room();

		else if (ch == Enter && select == 1)      //掖褒1 菟橫陛晦
			class_room1();

		else if (ch == Enter && select == 2)      //掖褒2 菟橫陛晦
			class_room2();

		else if (ch == Enter && select == 3)      //1類戲煎 頂溥陛晦
			open();
	}

}

void level2::rest_room() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				剪選縑 鼠樹陛 氈棻 " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ濠撮 獄棻" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  濠撮 獄棻" << endl;
			cout << "				Ⅱ斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) { //濰褒剪選爾晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				旋濠陛 氈啻...?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl;
			cout << "				﹥﹥﹥﹥       ﹥﹥﹥﹥" << endl;
			cout << "				﹥      ﹥    ﹥      ﹥" << endl;
			cout << "				﹥       ﹥   ﹥      ﹥" << endl;
			cout << "				﹥﹥﹥﹥﹥    ﹥      ﹥" << endl;
			cout << "				﹥    ﹥      ﹥      ﹥" << endl;
			cout << "				﹥     ﹥     ﹥      ﹥" << endl;
			cout << "				﹥      ﹥    ﹥      ﹥" << endl;
			cout << "				﹥       ﹥    ﹥﹥﹥﹥" << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");

		}
		else if (ch == Enter && select == 1)    //濰褒釭陛晦
			break;
	}
}

void level2::class_room1() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				綴奢疇婁 斜 蕙縑 翱檜...? " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");

		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ翱煎 儀艦爾晦" << endl;
			cout << "				  翱煎 寞貲煙 陴晦晦" << endl;
			cout << "				  鼠衛堅 掖褒1縑憮 釭陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  翱煎 儀艦爾晦" << endl;
			cout << "				Ⅱ翱煎 寞貲煙 陴晦晦" << endl;
			cout << "				  鼠衛堅 掖褒1縑憮 釭陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  翱煎 儀艦爾晦" << endl;
			cout << "				  翱煎 寞貲煙 陴晦晦" << endl;
			cout << "				Ⅱ鼠衛堅 掖褒1縑憮 釭陛晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) {   //翱煎 艦爾晦 
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				嬴棲..! 獗啖霞 旋濠陛...!" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl;
			cout << "				﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥" << endl;
			cout << "				﹥          ﹥        " << endl;
			cout << "				﹥          ﹥        " << endl;
			cout << "				﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥" << endl;
			cout << "				        ﹥  ﹥        " << endl;
			cout << "				        ﹥  ﹥        " << endl;
			cout << "				﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥" << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
		}
		else if (ch == Enter && select == 1) {   //翱煎 寞貲煙 陴啖爾晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				頂 檜葷擊 瞳歷渦棲..." << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				戲學...." << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				濡啖氈朝 熱鼻 餌僭 嫦唯" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause"); system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				橫獐梱?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ綠塵廓蒂 殮溘獄棻" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  綠塵廓蒂 殮溘獄棻" << endl;
			cout << "				Ⅱ斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) {    //綠塵廓殮溘
			system("cls");
			char password2[4];
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				綠塵廓蒂 殮溘撮蹂 (渠僥濠煎)" << endl << "				綠廓殮溘->"; cin >> password2;
			cout << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			if (strcmp(password2, "ROSE") == 0) {
				system("cls");
				cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				餌僭擊 翮歷棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause"); system("cls");
				cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				翮潸陛 氈啻...劃陛..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause"); system("cls");
				cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				夤戲煎 釭陞 熱 氈擊剪 偽嬴..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause");
				ending();
			}
		}
		else if (ch == Enter && select == 1)    //釭陛晦
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
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ擠學褒" << endl;
			cout << "				  嘐獎褒" << endl;
			cout << "				  掖濰褒" << endl;
			cout << "				  掖鼠褒" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  擠學褒" << endl;
			cout << "				Ⅱ嘐獎褒" << endl;
			cout << "				  掖濰褒" << endl;
			cout << "				  掖鼠褒" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  擠學褒" << endl;
			cout << "				  嘐獎褒" << endl;
			cout << "				Ⅱ掖濰褒" << endl;
			cout << "				  掖鼠褒" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  擠學褒" << endl;
			cout << "				  嘐獎褒" << endl;
			cout << "				  掖濰褒" << endl;
			cout << "				Ⅱ掖鼠褒" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {                      //嬴楚煎 頂塭晦
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {                 //嬪煎 螢葬晦
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0)      //擠學褒菟橫陛晦
			music_room();

		else if (ch == Enter && select == 1)      //嘐獎褒菟橫陛晦
			art_room();

		else if (ch == Enter && select == 2) {     //掖濰褒菟橫陛晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				濡啖氈擠" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
			system("pause"); system("cls");
		}

		else if (ch == Enter && select == 3)      //掖鼠褒菟橫陛晦
			teacher_room();

	}

}

void level1::music_room() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl;
	cout << "            天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	cout << "           太       ﹥﹥      ﹥﹥       太      ﹥﹥      ﹥﹥      ﹥﹥      太" << endl;
	cout << "           太       ﹥﹥      ﹥﹥       太      ﹥﹥      ﹥﹥      ﹥﹥      太" << endl;
	cout << "           太       ﹥﹥      ﹥﹥       太      ﹥﹥      ﹥﹥      ﹥﹥      太" << endl;
	cout << "           太       ﹥﹥      ﹥﹥       太      ﹥﹥      ﹥﹥      ﹥﹥      太" << endl;
	cout << "           太       ﹥﹥      ﹥﹥       太      ﹥﹥      ﹥﹥      ﹥﹥      太" << endl;
	cout << "           太        太        太        太        太       太        太       太" << endl;
	cout << "           太        太        太        太        太       太        太       太" << endl;
	cout << "           太        太        太        太        太       太        太       太" << endl;
	cout << "           太        太        太        太        太       太        太       太" << endl;
	cout << "           太        太        太        太        太       太        太       太" << endl;
	cout << "            天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ濠撮 獄棻" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  濠撮 獄棻" << endl;
			cout << "				Ⅱ斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)   //嬴喻學爾爾晦
			piano();

		else if (ch == Enter && select == 1)    //擠學褒釭陛晦
			break;
	}
}

void level1::piano() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				學爾陛 氈啻...?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				Q : 嘐 + 溯 + 衛 + 塭 = ? " << endl << "				(檜 朝 擅濠葬)" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
}

void level1::art_room() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl;
	cout << "	                         ﹥﹥" << endl;
	cout << "	                       ﹥    ﹥" << endl;
	cout << "	                       ﹥    ﹥" << endl;
	cout << "	                        ﹥  ﹥ " << endl;
	cout << "	                       ﹥    ﹥ " << endl;
	cout << "	                       ﹥    ﹥" << endl;
	cout << "	                       ﹥    ﹥ " << endl;
	cout << "	                       ﹥    ﹥ " << endl;
	cout << "	                       ﹥﹥﹥﹥" << endl << endl << endl << endl << endl;
	cout << "				戮堅鼻檜 氈啻 .. ? " << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause"); system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl;
	cout << "	                             ﹥﹥" << endl;
	cout << "	                         ﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	                         ﹥        ﹥" << endl;
	cout << "	                         ﹥        ﹥" << endl;
	cout << "	                         ﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	                             ﹥﹥" << endl;
	cout << "	                             ﹥﹥" << endl;
	cout << "	                             ﹥﹥" << endl;
	cout << "	                             ﹥﹥" << endl << endl << endl << endl << endl;
	cout << "				蜂纂蒂 嫦唯....! " << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause"); system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ戮堅鼻擊 髦髦 藥獄棻" << endl;
			cout << "				  戮堅鼻擊 撮啪 藥獄棻" << endl;
			cout << "				  釭蒂 廓 藥獄棻" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  戮堅鼻擊 髦髦 藥獄棻" << endl;
			cout << "				Ⅱ戮堅鼻擊 撮啪 藥獄棻" << endl;
			cout << "				  釭蒂 廓 藥獄棻" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  戮堅鼻擊 髦髦 藥獄棻" << endl;
			cout << "				  戮堅鼻擊 撮啪 藥獄棻" << endl;
			cout << "				Ⅱ釭蒂 廓 藥獄棻" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  戮堅鼻擊 髦髦 藥獄棻" << endl;
			cout << "				  戮堅鼻擊 撮啪 藥獄棻" << endl;
			cout << "				  釭蒂 廓 藥獄棻" << endl;
			cout << "				Ⅱ斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) {   //髦髦藹
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				傘鼠 髦髦蟻濫嬴 ..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}

		else if (ch == Enter && select == 1) {   //撮啪藹
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				廓蒂 嫦唯" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl;
			cout << "				﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
			cout << "				﹥" << endl;
			cout << "				﹥﹥﹥﹥﹥﹥﹥" << endl;
			cout << "				              ﹥ " << endl;
			cout << "				               ﹥" << endl;
			cout << "				               ﹥" << endl;
			cout << "				              ﹥" << endl;
			cout << "				﹥﹥﹥﹥﹥﹥﹥" << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
		}

		else if (ch == Enter && select == 2) {   //陳 藹
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				....." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl; system("pause"); system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				戲學...." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");

			cout << "gameover" << endl;
			exit(0);
		}

		else if (ch == Enter && select == 3) {   //髦髦藹
			break;
		}
	}
}

void level1::teacher_room() {
	int password;
	while (1) {
		system("cls");
		cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "				綠塵廓陛 仄腴..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		system("pause"); system("cls");
		cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "				綠塵廓蒂 殮溘衛蹂 -3濠葬 (牖憮 : 擠學褒, 嘐獎褒) " << endl << "				綠廓殮溘->";
		cin >> password;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
		if (password == 185)
			teacher_roomO();
		else {
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				綠塵廓陛 準濠釭" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
			break;
		}
	}
}

void level1::teacher_roomO() {
	system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				掖鼠褒翮葡" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				掖饕縑 翮潸 嫦唯 " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ鄹晦" << endl;
			cout << "				  斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  鄹晦" << endl;
			cout << "				Ⅱ斜傖 除棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) { //2類戲煎陛晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << endl << "				2類戲煎 陛朝 翮潸蒂 菜棻" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
			open();
		}

		else if (ch == Enter && select == 1)    //釭陛晦
			rooms1();
	}
}

open::open() {
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ1類 萃楝爾晦" << endl;
			cout << "				  2類戲煎 陛朝 啗欽" << endl;
			cout << "				  釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1類 萃楝爾晦" << endl;
			cout << "				Ⅱ2類戲煎 陛朝 啗欽" << endl;
			cout << "				  釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1類 萃楝爾晦" << endl;
			cout << "				  2類戲煎 陛朝 啗欽" << endl;
			cout << "				Ⅱ釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)     //1類萃楝爾楝陛晦
			rooms1();

		else if (ch == Enter && select == 1) {  //2類戲煎螢塭陛晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl;
			cout << "				                   ﹥﹥﹥" << endl;
			cout << "				                   ﹥" << endl;
			cout << "				             ﹥﹥﹥﹥" << endl;
			cout << "				             ﹥" << endl;
			cout << "				       ﹥﹥﹥﹥" << endl;
			cout << "				       ﹥" << endl;
			cout << "				 ﹥﹥﹥﹥" << endl;
			cout << "				 ﹥		剽幔...剽幔剽幔..." << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");

			rooms2();
		}
		else if (ch == Enter && select == 2) {    //釭陛晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				蘗蘗...! 櫺櫺...! 髦溥輿撮蹂....!" << endl << endl;
			cout << "				嬴鼠紫 橈朝 蛭... 翮潸蒂 瓊嬴瑭撿雖..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
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
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ1類 萃楝爾晦" << endl;
			cout << "				  2類戲煎 陛朝 啗欽" << endl;
			cout << "				  釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1類 萃楝爾晦" << endl;
			cout << "				Ⅱ2類戲煎 陛朝 啗欽" << endl;
			cout << "				  釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1類 萃楝爾晦" << endl;
			cout << "				  2類戲煎 陛朝 啗欽" << endl;
			cout << "				Ⅱ釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)     //1類萃楝爾楝陛晦
			rooms1();

		else if (ch == Enter && select == 1)    //2類戲煎螢塭陛晦
			rooms2();

		else if (ch == Enter && select == 2) {    //釭陛晦
			THEend();
			system("pause");
		}
	}
}

void ending::THEend() {

	system("cls");
	cout << "" << endl << endl << endl << endl;
	cout << " 		﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << " 		﹥﹥		       ﹥" << endl;
	cout << " 		﹥   ﹥		       ﹥" << endl;
	cout << " 		﹥	 ﹥	       ﹥               ﹥﹥" << endl;
	cout << " 		﹥	     ﹥	       ﹥             ﹥    ﹥" << endl;
	cout << " 		﹥	        ﹥     ﹥            ﹥      ﹥    ﹥ " << endl;
	cout << " 		﹥		﹥     ﹥             ﹥    ﹥    ﹥  " << endl;
	cout << " 		﹥		﹥     ﹥              ﹥﹥      ﹥" << endl;
	cout << " 		﹥		﹥     ﹥       ﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << " 		﹥		﹥     ﹥      ﹥     ﹥﹥     " << endl;
	cout << " 		﹥		﹥     ﹥     ﹥     ﹥﹥       " << endl;
	cout << " 		﹥	        ﹥     ﹥    ﹥     ﹥﹥" << endl;
	cout << " 		﹥		﹥     ﹥          ﹥﹥﹥" << endl;
	cout << " 		﹥	     ≒ ﹥     ﹥          ﹥    ﹥" << endl;
	cout << " 		﹥		﹥     ﹥  ﹥﹥﹥﹥﹥     ﹥   " << endl;
	cout << " 		﹥		﹥     ﹥                  ﹥" << endl;
	cout << " 		﹥		﹥     ﹥                   ﹥" << endl;
	cout << " 		  ﹥		﹥﹥﹥﹥                     ﹥" << endl;
	cout << " 		     ﹥	        ﹥" << endl;
	cout << " 			 ﹥     ﹥" << endl;
	cout << " 			     ﹥ ﹥" << endl;
	cout << " 				﹥	" << endl << endl << endl;
	cout << "" << endl << endl << endl << endl;
	cout << "                                  驍  轎  撩  奢";
	cout << "" << endl << endl << endl << endl;

	exit(0);
}

start::start() {
	cout << "" << endl << endl;
	cout << "	 ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥    ﹥﹥﹥﹥﹥        ﹥          ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	 ﹥            ﹥             ﹥               ﹥  ﹥        ﹥        ﹥  ﹥" << endl;
	cout << "	 ﹥            ﹥            ﹥               ﹥    ﹥       ﹥        ﹥  ﹥" << endl;
	cout << "	 ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥  ﹥              ﹥﹥﹥﹥﹥      ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	 ﹥                      ﹥  ﹥             ﹥         ﹥    ﹥            ﹥" << endl;
	cout << "	 ﹥                      ﹥   ﹥           ﹥           ﹥   ﹥            ﹥" << endl;
	cout << "	 ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥    ﹥﹥﹥﹥﹥ ﹥             ﹥  ﹥            ﹥﹥﹥﹥﹥﹥" << endl << endl << endl << endl;
	cout << "			 		﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << "			 		﹥﹥          ﹥" << endl;
	cout << "			 		﹥   ﹥       ﹥" << endl;
	cout << "			 		﹥      ﹥    ﹥" << endl;
	cout << "			 		﹥         ﹥ ﹥" << endl;
	cout << "			 		﹥         ﹥ ﹥" << endl;
	cout << "			 		﹥         ﹥ ﹥" << endl;
	cout << "			 		﹥         ﹥ ﹥" << endl;
	cout << "			 		﹥         ﹥ ﹥" << endl;
	cout << "			 		﹥       ≒﹥ ﹥" << endl;
	cout << "			 		﹥         ﹥ ﹥" << endl;
	cout << "				          ﹥       ﹥ ﹥" << endl;
	cout << "			                     ﹥    ﹥ ﹥" << endl;
	cout << "			                        ﹥ ﹥ " << endl;
	cout << "		 				   ﹥" << endl << endl << endl;
	system("pause"); system("cls");

	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				褻濛徹 : 寞酈 & Enter" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause"); system("cls");

	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	school_draw();
	cout << "				換集爾棲 掖艘棻..." << endl << endl << endl;
	cout << "				僥檜 濡啖氈棻..." << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause"); system("cls");

	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	key_draw();
	cout << "				翮潸陛 蹂棻..." << endl << endl << endl;
	cout << "				輿嬪蒂 萃楝爾濠..." << endl;
	cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl;
	system("pause");


	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				Ⅱ1類 萃楝爾晦" << endl;
			cout << "				  2類戲煎 陛朝 啗欽" << endl;
			cout << "				  釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天";
		}
		else if (select == 1) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1類 萃楝爾晦" << endl;
			cout << "				Ⅱ2類戲煎 陛朝 啗欽" << endl;
			cout << "				  釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1類 萃楝爾晦" << endl;
			cout << "				  2類戲煎 陛朝 啗欽" << endl;
			cout << "				Ⅱ釭陛爾晦" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)    //1類萃楝爾楝陛晦
			break;

		else if (ch == Enter && select == 1) {  //2類戲煎螢塭陛晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				測饑測饑..菟菟..." << endl << endl << endl;
			cout << "				僥檜 濡啖氈啻.. 翮潸陛 蹂剪 偽棻" << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}

		else if (ch == Enter && select == 2) {    //釭陛晦
			system("cls");
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				蘗蘗...! 櫺櫺...! 髦溥輿撮蹂....!" << endl << endl;
			cout << "				嬴鼠紫 橈朝 蛭... 翮潸蒂 瓊嬴瑭撿雖..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}
	}
}

void start::school_draw() {
	cout << endl << endl;
	cout << "	                          ﹥﹥" << endl;
	cout << "	                        ﹥﹥﹥﹥" << endl;
	cout << "	                     ﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	                       ﹥﹤﹤﹤﹥" << endl;
	cout << "	                       ﹥﹤﹤﹤﹥" << endl;
	cout << "	                       ﹥﹤﹤﹤﹥" << endl;
	cout << "	     ﹥                ﹥﹤﹤﹤﹥                          ﹥" << endl;
	cout << "	    ﹥﹥               ﹥﹥﹥﹥﹥                         ﹥﹥" << endl;
	cout << "	   ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	   ﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥" << endl;
	cout << "	   ﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥" << endl;
	cout << "	   ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	   ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	   ﹥﹤﹤﹥﹥﹤﹤﹥﹥﹥﹥﹤﹤﹤﹥﹥﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥" << endl;
	cout << "	   ﹥﹤﹤﹥﹥﹤﹤﹥﹥﹥﹥﹤﹤﹤﹥﹥﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥﹤﹤﹥﹥" << endl;
	cout << "	   ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl;
	cout << "	   ﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥" << endl << endl << endl;

}

void start::key_draw() {
	cout << endl << endl;
	cout << "				  ﹥" << endl;
	cout << "				﹥﹥﹥" << endl;
	cout << "			      ﹥﹥  ﹥﹥" << endl;
	cout << "			    ﹥﹥      ﹥﹥" << endl;
	cout << "			  ﹥﹥          ﹥﹥" << endl;
	cout << "                            ﹥﹥     ﹥﹥" << endl;
	cout << "			      ﹥﹥  ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				 ﹥﹥" << endl;
	cout << "				  ﹥" << endl << endl << endl;
}
