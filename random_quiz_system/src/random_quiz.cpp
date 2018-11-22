/****************************************************
    > File Name: random_quiz.cpp
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Sat 17 Nov 2018 01:43:33 PM CST
*****************************************************/

#include <iostream>
#include <time.h>
//#include <conio>
#include "fileOperation.h"
#include "student.h"
#include "question.h"

using namespace std;

int main(int argc, char **argv)
{
	srand(time(NULL));
	int flag;
	system("clear");
	cout << "---------------------------------------------" << endl;
	cout << "random quiz system" << endl << endl;
	cout << "press Enter to begin and press Esc to exit" << endl;
	cout << "---------------------------------------------" << endl;
	char a = getchar();
	cout<< a<<endl;
	return 0;
}
