#include <iostream>
#include <conio.h>
using namespace std;

#include "���.h"	

#define Enter 13

void level2::rooms2() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				2���� ���� " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				2�� ���� �ѷ�����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��ȭ���" << endl;
			cout << "				  ����1" << endl;
			cout << "				  ����2" << endl;
			cout << "				  1������ �ٽ� ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ȭ���" << endl;
			cout << "				������1" << endl;
			cout << "				  ����2" << endl;
			cout << "				  1������ �ٽ� ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ȭ���" << endl;
			cout << "				  ����1" << endl;
			cout << "				������2" << endl;
			cout << "				  1������ �ٽ� ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ȭ���" << endl;
			cout << "				  ����1" << endl;
			cout << "				  ����2" << endl;
			cout << "				��1������ �ٽ� ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}


		ch = _getch();
		if (ch == 80) {							  //�Ʒ��� �����
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {					  //���� �ø���
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0)      //ȭ��ǵ���
			rest_room();

		else if (ch == Enter && select == 1)      //����1 ����
			class_room1();

		else if (ch == Enter && select == 2)      //����2 ����
			class_room2();

		else if (ch == Enter && select == 3)      //1������ ��������
			open();
	}

}

void level2::rest_room() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				�ſ￡ ���� �ִ� " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				���ڼ��� ����" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  �ڼ��� ����" << endl;
			cout << "				���׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) { //ȭ��ǰſﺸ��
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				���ڰ� �ֳ�...?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl;
			cout << "				�����       �����" << endl;
			cout << "				��      ��    ��      ��" << endl;
			cout << "				��       ��   ��      ��" << endl;
			cout << "				������    ��      ��" << endl;
			cout << "				��    ��      ��      ��" << endl;
			cout << "				��     ��     ��      ��" << endl;
			cout << "				��      ��    ��      ��" << endl;
			cout << "				��       ��    �����" << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");

		}
		else if (ch == Enter && select == 1)    //ȭ��ǳ�����
			break;
	}
}

void level2::class_room1() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				���å�� �� ���� ������...? " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");

		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				�����ʷ� ��ĥ�غ���" << endl;
			cout << "				  ���ʷ� ���� �����" << endl;
			cout << "				  �����ϰ� ����1���� ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ���ʷ� ��ĥ�غ���" << endl;
			cout << "				�����ʷ� ���� �����" << endl;
			cout << "				  �����ϰ� ����1���� ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ���ʷ� ��ĥ�غ���" << endl;
			cout << "				  ���ʷ� ���� �����" << endl;
			cout << "				�������ϰ� ����1���� ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) {   //���ʷ� ĥ�غ��� 
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				�ƴ�..! ������ ���ڰ�...!" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl;
			cout << "				������  ������" << endl;
			cout << "				��          ��        " << endl;
			cout << "				��          ��        " << endl;
			cout << "				������  ������" << endl;
			cout << "				        ��  ��        " << endl;
			cout << "				        ��  ��        " << endl;
			cout << "				������  ������" << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
		}
		else if (ch == Enter && select == 1) {   //���ʷ� ���� ���ܺ���
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				�� �̸��� ��������..." << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				����...." << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				����ִ� ������ �繰�� �߰�" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause"); system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				Ǯ���?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				����й�ȣ�� �Է��غ���" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ��й�ȣ�� �Է��غ���" << endl;
			cout << "				���׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) {    //��й�ȣ�Է�
			system("cls");
			char password2[4];
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��й�ȣ�� �Է��ϼ��� (�빮�ڷ�)" << endl << "				����Է�->"; cin >> password2;
			cout << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			if (strcmp(password2, "ROSE") == 0) {
				system("cls");
				cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				�繰���� ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause"); system("cls");
				cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				���谡 �ֳ�...����..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause"); system("cls");
				cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "				������ ���� �� ������ ����..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				system("pause");
				ending();
			}
		}
		else if (ch == Enter && select == 1)    //������
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
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				�����ǽ�" << endl;
			cout << "				  �̼���" << endl;
			cout << "				  �����" << endl;
			cout << "				  ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ���ǽ�" << endl;
			cout << "				���̼���" << endl;
			cout << "				  �����" << endl;
			cout << "				  ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ���ǽ�" << endl;
			cout << "				  �̼���" << endl;
			cout << "				�������" << endl;
			cout << "				  ������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ���ǽ�" << endl;
			cout << "				  �̼���" << endl;
			cout << "				  �����" << endl;
			cout << "				��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}

		ch = _getch();
		if (ch == 80) {                      //�Ʒ��� �����
			if (select == 3) select = 0;
			else select++;
		}
		else if (ch == 72) {                 //���� �ø���
			if (select == 0) select = 3;
			else select--;
		}
		else if (ch == Enter && select == 0)      //���ǽǵ���
			music_room();

		else if (ch == Enter && select == 1)      //�̼��ǵ���
			art_room();

		else if (ch == Enter && select == 2) {     //����ǵ���
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				�������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
			system("pause"); system("cls");
		}

		else if (ch == Enter && select == 3)      //�����ǵ���
			teacher_room();

	}

}

void level1::music_room() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl;
	cout << "            �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	cout << "           ��       ���      ���       ��      ���      ���      ���      ��" << endl;
	cout << "           ��       ���      ���       ��      ���      ���      ���      ��" << endl;
	cout << "           ��       ���      ���       ��      ���      ���      ���      ��" << endl;
	cout << "           ��       ���      ���       ��      ���      ���      ���      ��" << endl;
	cout << "           ��       ���      ���       ��      ���      ���      ���      ��" << endl;
	cout << "           ��        ��        ��        ��        ��       ��        ��       ��" << endl;
	cout << "           ��        ��        ��        ��        ��       ��        ��       ��" << endl;
	cout << "           ��        ��        ��        ��        ��       ��        ��       ��" << endl;
	cout << "           ��        ��        ��        ��        ��       ��        ��       ��" << endl;
	cout << "           ��        ��        ��        ��        ��       ��        ��       ��" << endl;
	cout << "            �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				���ڼ��� ����" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  �ڼ��� ����" << endl;
			cout << "				���׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)   //�ǾƳ�Ǻ�����
			piano();

		else if (ch == Enter && select == 1)    //���ǽǳ�����
			break;
	}
}

void level1::piano() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				�Ǻ��� �ֳ�...?" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				Q : �� + �� + �� + �� = ? " << endl << "				(�� ��Ʈ�� ���ڸ�)" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
}

void level1::art_room() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl;
	cout << "	                         ���" << endl;
	cout << "	                       ��    ��" << endl;
	cout << "	                       ��    ��" << endl;
	cout << "	                        ��  �� " << endl;
	cout << "	                       ��    �� " << endl;
	cout << "	                       ��    ��" << endl;
	cout << "	                       ��    �� " << endl;
	cout << "	                       ��    �� " << endl;
	cout << "	                       �����" << endl << endl << endl << endl << endl;
	cout << "				������� �ֳ� .. ? " << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause"); system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl;
	cout << "	                             ���" << endl;
	cout << "	                         �������" << endl;
	cout << "	                         ��        ��" << endl;
	cout << "	                         ��        ��" << endl;
	cout << "	                         �������" << endl;
	cout << "	                             ���" << endl;
	cout << "	                             ���" << endl;
	cout << "	                             ���" << endl;
	cout << "	                             ���" << endl << endl << endl << endl << endl;
	cout << "				��ġ�� �߰�....! " << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause"); system("cls");
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��������� ��� �ĺ���" << endl;
			cout << "				  ������� ���� �ĺ���" << endl;
			cout << "				  ���� �ѹ� �ĺ���" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ������� ��� �ĺ���" << endl;
			cout << "				��������� ���� �ĺ���" << endl;
			cout << "				  ���� �ѹ� �ĺ���" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ������� ��� �ĺ���" << endl;
			cout << "				  ������� ���� �ĺ���" << endl;
			cout << "				������ �ѹ� �ĺ���" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 3) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  ������� ��� �ĺ���" << endl;
			cout << "				  ������� ���� �ĺ���" << endl;
			cout << "				  ���� �ѹ� �ĺ���" << endl;
			cout << "				���׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) {   //���ħ
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				�ʹ� ������ݾ� ..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}

		else if (ch == Enter && select == 1) {   //����ħ
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��ȣ�� �߰�" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl;
			cout << "				���������" << endl;
			cout << "				��" << endl;
			cout << "				��������" << endl;
			cout << "				              �� " << endl;
			cout << "				               ��" << endl;
			cout << "				               ��" << endl;
			cout << "				              ��" << endl;
			cout << "				��������" << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");
		}

		else if (ch == Enter && select == 2) {   //�� ħ
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��....." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl; system("pause"); system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				����...." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause"); system("cls");

			cout << "gameover" << endl;
			exit(0);
		}

		else if (ch == Enter && select == 3) {   //���ħ
			break;
		}
	}
}

void level1::teacher_room() {
	int password;
	while (1) {
		system("cls");
		cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "				��й�ȣ�� �ʤ�����..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		system("pause"); system("cls");
		cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "				��й�ȣ�� �Է��Ͻÿ� -3�ڸ� (���� : ���ǽ�, �̼���) " << endl << "				����Է�->";
		cin >> password;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
		if (password == 185)
			teacher_roomO();
		else {
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��й�ȣ�� Ʋ���ڳ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
			break;
		}
	}
}

void level1::teacher_roomO() {
	system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				�����ǿ���" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				��Ź�� ���� �߰� " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause"); system("cls");

	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				���ݱ�" << endl;
			cout << "				  �׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  �ݱ�" << endl;
			cout << "				���׳� ����" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0) { //2�����ΰ���
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << endl << "				2������ ���� ���踦 ȹ���ߴ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
			open();
		}

		else if (ch == Enter && select == 1)    //������
			rooms1();
	}
}

open::open() {
	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��1�� �ѷ�����" << endl;
			cout << "				  2������ ���� ���" << endl;
			cout << "				  ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1�� �ѷ�����" << endl;
			cout << "				��2������ ���� ���" << endl;
			cout << "				  ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1�� �ѷ�����" << endl;
			cout << "				  2������ ���� ���" << endl;
			cout << "				����������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)     //1���ѷ���������
			rooms1();

		else if (ch == Enter && select == 1) {  //2�����οö󰡱�
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl;
			cout << "				                   ����" << endl;
			cout << "				                   ��" << endl;
			cout << "				             �����" << endl;
			cout << "				             ��" << endl;
			cout << "				       �����" << endl;
			cout << "				       ��" << endl;
			cout << "				 �����" << endl;
			cout << "				 ��		�ѹ�...�ѹ��ѹ�..." << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");

			rooms2();
		}
		else if (ch == Enter && select == 2) {    //������
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				����...! ����...! ����ּ���....!" << endl << endl;
			cout << "				�ƹ��� ���� ��... ���踦 ã�ƺ�����..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
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
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��1�� �ѷ�����" << endl;
			cout << "				  2������ ���� ���" << endl;
			cout << "				  ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1�� �ѷ�����" << endl;
			cout << "				��2������ ���� ���" << endl;
			cout << "				  ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1�� �ѷ�����" << endl;
			cout << "				  2������ ���� ���" << endl;
			cout << "				����������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)     //1���ѷ���������
			rooms1();

		else if (ch == Enter && select == 1)    //2�����οö󰡱�
			rooms2();

		else if (ch == Enter && select == 2) {    //������
			THEend();
			system("pause");
		}
	}
}

void ending::THEend() {

	system("cls");
	cout << "" << endl << endl << endl << endl;
	cout << " 		�������������" << endl;
	cout << " 		���		       ��" << endl;
	cout << " 		��   ��		       ��" << endl;
	cout << " 		��	 ��	       ��               ���" << endl;
	cout << " 		��	     ��	       ��             ��    ��" << endl;
	cout << " 		��	        ��     ��            ��      ��    �� " << endl;
	cout << " 		��		��     ��             ��    ��    ��  " << endl;
	cout << " 		��		��     ��              ���      ��" << endl;
	cout << " 		��		��     ��       ����������" << endl;
	cout << " 		��		��     ��      ��     ���     " << endl;
	cout << " 		��		��     ��     ��     ���       " << endl;
	cout << " 		��	        ��     ��    ��     ���" << endl;
	cout << " 		��		��     ��          ����" << endl;
	cout << " 		��	     �� ��     ��          ��    ��" << endl;
	cout << " 		��		��     ��  ������     ��   " << endl;
	cout << " 		��		��     ��                  ��" << endl;
	cout << " 		��		��     ��                   ��" << endl;
	cout << " 		  ��		�����                     ��" << endl;
	cout << " 		     ��	        ��" << endl;
	cout << " 			 ��     ��" << endl;
	cout << " 			     �� ��" << endl;
	cout << " 				��	" << endl << endl << endl;
	cout << "" << endl << endl << endl << endl;
	cout << "                                  Ż  ��  ��  ��";
	cout << "" << endl << endl << endl << endl;

	exit(0);
}

start::start() {
	cout << "" << endl << endl;
	cout << "	 �������  �������    ������        ��          �������  �������" << endl;
	cout << "	 ��            ��             ��               ��  ��        ��        ��  ��" << endl;
	cout << "	 ��            ��            ��               ��    ��       ��        ��  ��" << endl;
	cout << "	 �������  �������  ��              ������      �������  �������" << endl;
	cout << "	 ��                      ��  ��             ��         ��    ��            ��" << endl;
	cout << "	 ��                      ��   ��           ��           ��   ��            ��" << endl;
	cout << "	 �������  �������    ������ ��             ��  ��            �������" << endl << endl << endl << endl;
	cout << "			 		���������" << endl;
	cout << "			 		���          ��" << endl;
	cout << "			 		��   ��       ��" << endl;
	cout << "			 		��      ��    ��" << endl;
	cout << "			 		��         �� ��" << endl;
	cout << "			 		��         �� ��" << endl;
	cout << "			 		��         �� ��" << endl;
	cout << "			 		��         �� ��" << endl;
	cout << "			 		��         �� ��" << endl;
	cout << "			 		��       �ܡ� ��" << endl;
	cout << "			 		��         �� ��" << endl;
	cout << "				          ��       �� ��" << endl;
	cout << "			                     ��    �� ��" << endl;
	cout << "			                        �� �� " << endl;
	cout << "		 				   ��" << endl << endl << endl;
	system("pause"); system("cls");

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "				���۹� : ����Ű & Enter" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause"); system("cls");

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	school_draw();
	cout << "				�������� �б�����..." << endl << endl << endl;
	cout << "				���� ����ִ�..." << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause"); system("cls");

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	key_draw();
	cout << "				���谡 �ʿ��ϴ�..." << endl << endl << endl;
	cout << "				������ �ѷ�����..." << endl;
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	system("pause");


	int ch = 0;
	int select = 0;

	while (1) {
		system("cls");
		if (select == 0) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				��1�� �ѷ�����" << endl;
			cout << "				  2������ ���� ���" << endl;
			cout << "				  ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�";
		}
		else if (select == 1) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1�� �ѷ�����" << endl;
			cout << "				��2������ ���� ���" << endl;
			cout << "				  ��������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		else if (select == 2) {
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				  1�� �ѷ�����" << endl;
			cout << "				  2������ ���� ���" << endl;
			cout << "				����������" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
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
		else if (ch == Enter && select == 0)    //1���ѷ���������
			break;

		else if (ch == Enter && select == 1) {  //2�����οö󰡱�
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				���ȴ���..������..." << endl << endl << endl;
			cout << "				���� ����ֳ�.. ���谡 �ʿ��Ѱ� ����" << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}

		else if (ch == Enter && select == 2) {    //������
			system("cls");
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "				����...! ����...! ����ּ���....!" << endl << endl;
			cout << "				�ƹ��� ���� ��... ���踦 ã�ƺ�����..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			system("pause");
		}
	}
}

void start::school_draw() {
	cout << endl << endl;
	cout << "	                          ���" << endl;
	cout << "	                        �����" << endl;
	cout << "	                     ��������" << endl;
	cout << "	                       ������" << endl;
	cout << "	                       ������" << endl;
	cout << "	                       ������" << endl;
	cout << "	     ��                ������                          ��" << endl;
	cout << "	    ���               ������                         ���" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl;
	cout << "	   �������������������������������" << endl << endl << endl;

}

void start::key_draw() {
	cout << endl << endl;
	cout << "				  ��" << endl;
	cout << "				����" << endl;
	cout << "			      ���  ���" << endl;
	cout << "			    ���      ���" << endl;
	cout << "			  ���          ���" << endl;
	cout << "                            ���     ���" << endl;
	cout << "			      ���  ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				 ��" << endl;
	cout << "				 ���" << endl;
	cout << "				 ��" << endl;
	cout << "				 ���" << endl;
	cout << "				 ���" << endl;
	cout << "				  ��" << endl << endl << endl;
}