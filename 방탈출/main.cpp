#include <iostream>
using namespace std;

#include "헤더.h"




int main() {

	start a;
	start *pa = &a;

	pa->rooms1();		  //동적바인딩
	pa->teacher_room();


}