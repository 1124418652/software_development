/*****************************************************
    > File Name: main.cpp
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Tue 13 Nov 2018 10:35:03 PM CST
******************************************************/

#include <stdio.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "funcdef.h"

using namespace std;

int main(int argc, char **argv){
	int x1, x2, flag, score = 0;
	char sign;
	int i, j;              // j 为正确的数目
	srand(time(NULL));     // 随机数种子
	cout << "\t小学生计算机辅助教学系统\n\n" << endl;
	 
	do
	{
		j = 0;
		
		for (i = 0; i < 10; i++)     // 一轮测试
		{
			do             // 获取表达式
			{
				 x1 = getNumber();
				 x2 = getNumber();
				 sign = getSign();
			}while(0 == JudgeExpression(x1, x2, sign));
			flag = printResult(judgeResult(x1, x2, sign, \
							   printExpression(x1, x2, sign)));
			if (1 == flag)
				j++;
		}
		
		score = 10 * j;
		cout << "分数：" << score << "\t正确率：" << score << "%\n";
		system("pause");
		if (75 > score)
			cout << "分数低于75,请重做" << endl;
		else
			break;
	}while(1);
}
