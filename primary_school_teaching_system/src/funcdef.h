#ifndef __funcdef_H
#define __funcdef_H 

int getNumber();  // 随机产生小于10 的数字
char getSign();   // 随机产生一个字符
bool JudgeExpression(int, int, char);     // 判断表达式是否合法
bool judgeResult(int, int, char, int);    // 判断结果是否正确
bool printResult(bool);        // 根据回答正确与否输出结果
int printExpression(int, int, char);    // 打印表达式，并获取输入

#endif
