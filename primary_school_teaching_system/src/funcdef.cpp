#include <time.h>
#include <iostream>
#include "funcdef.h"

int getNumber()
{
	return rand() % 10 + 1;
}

char getSign()
{
	switch(rand() % 4 + 1){
	case 1:
		return '+';
	case 2:
		return '-';
	case 3:
		return '*';
	case 4:
		return '/';
	}
}

bool JudgeExpression(int x1, int x2, char sign){
	bool flag = true;
	if ('/' == sign && 0 == x2)
		flag = false;
	if ('-' == sign && x1 < x2)
		flag = false;
	if ('/' == sign && (float)x1 / x2 != x1 / x2)
		flag = false;
	return flag;
}

bool judgeResult(int x1, int x2, char sign, int result){
	int res = 0;
	bool flag = true;

	if ('+' == sign){
		if (x1 + x2 != result)
			flag = false;
	}
	else if ('-' == sign){
		if (x1 - x2 != result)
			flag = false;
	}
	else if ('*' == sign){
		if (x1 * x2 != result)
			flag = false;
	}
	else{
		if(x1 / x2 != result)
			flag = false;
	}
	return flag;
}

bool printResult(bool flag){
	bool ret = false;
	if (true == flag){
		ret = true;
		int tmp = rand() % 4 + 1;
		switch(tmp){
		case 1:
			std::cout << "very good" << std::endl;
			break;
		case 2:
			std::cout << "excellent!" << std::endl;
			break;
		case 3:
			std::cout << "nice work" << std::endl;
			break;
		case 4:
			std::cout << "keep up the good work" << std::endl;
			break;
		}
	}
	else{
		switch(rand() % 4 + 1){
		case 1:
			std::cout << "no, please try again" << std::endl;
			break;
		case 2:
			std::cout << "wrong, try once more" << std::endl;
			break;
		case 3:
			std::cout << "don't give up" << std::endl;
			break;
		case 4:
			std::cout << "wrong, keep trying" << std::endl;
			break;
		}
	}
	return ret;
}

int printExpression(int x1, int x2, char sign){
	int result;
	std::cout << x1 << sign << x2 << " = ";
	std::cin >> result;
	return result;
}
