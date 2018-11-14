/****************************************************
    > File Name: datetrans.cpp
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Mon 12 Nov 2018 12:42:17 PM CST
*****************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "transfunc.h"
using namespace std;

int main(int argc, char **argv){
	int choice, ret;
	do{
		cout << "1.year/month/day --> yearDay\
			     2.yearDay --> year/month/day\
				 3.Exit\n" << endl;
		ret = scanf("%d", &choice);
		while(1 != ret){
			cout << "Input the right number" << endl;
			cout << "1.year/month/day --> yearDay\n\
				     2.yearDay --> year/month/day\n\
					 3.Exit\n" << endl;
			ret = scanf("%d", &choice);
		}
		switch(choice){
		case 1:
			system("cls");
			year2day();
			break;
		case 2:
			system("cls");
			day2year();
			break;
		case 3:
			exit(0);
		default:
			cout << "error input，retry please" << endl;
			system("pause");
			system("cls");
			break;
		}
	}while(1);
	return 0;
}
