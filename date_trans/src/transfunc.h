/****************************************************
    > File Name: transfunc.h
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Mon 12 Nov 2018 12:44:23 PM CST
*****************************************************/

#ifndef __transfunc_h
#define __transfunc_h
#define MONTH 12

static int days[2][MONTH] = {
	 {31,28,31,30,31,30,31,31,30,31,30,31},
	 {31,29,31,30,31,30,31,31,30,31,30,31}
};
void day2year();
void year2day();

#endif
