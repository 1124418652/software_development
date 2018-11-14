/***************************************************
    > File Name: transfunc.cpp
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Mon 12 Nov 2018 06:12:29 PM CST
****************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "transfunc.h"


void year2day(){
	int year, month, date, ret, day = 0;
	int flag = 0;       // 作为day数组的索引
	do{
		ret = scanf("%d%d%d", &year, &month, &date);
		while(3 != ret){
			while('\n' != getchar());
			std::cout << "please input year, month, date:" << std::endl;
			ret = scanf("%d%d%d", &year, &month, &date); 
		}
		if(0 == year % 4 && 0 != year % 100 ||\
		   0 == year % 400)
			flag = 1;
		else
			flag = 0;
	}while(date > days[flag][month - 1]\
		   || month > 12 || month < 1);

	for (int i = 0; i < month - 1; i ++){ 
		day += days[flag][i];
	}
	day += date;
	std::cout << "这是" << year << "年的第" << day << "天\n" << std::endl;
	std::cout << "返回主菜单" << std::endl;
	system("pause");
	system("cls");
}

void day2year(){
	int day, year, month, date, ret, tmpDay = 0;
	int flag = 0;
	do{
		ret = scanf("%d%d", &year, &day);
		while(2 != ret){
			while('\n' != getchar());
			std::cout << "please input year, day:" << std::endl;
			ret = scanf("%d%d", &year, &day);
		}
		
		if(0 == year % 4 && 0 != year % 100 ||\
		   0 == year % 400)
			flag = 1;
		else
			flag = 0;
	}while(day > 366 || day < 0 ||\
		   (flag == 0 && day > 365));
	for (int i = 0; i < MONTH - 1; i ++){
		tmpDay += days[flag][i];
		if (tmpDay >= day){
			 month = i;
			 tmpDay -= days[flag][i];
			 break;
		}
	}
	date = day - tmpDay;
	std::cout << year << "的第" << day << "天是"\
			  << year << "年" << month << "月"\
			  << date << "日" << std::endl;
	std::cout << "返回主菜单" << std::endl;
	system("pause");
	system("cls");
}







