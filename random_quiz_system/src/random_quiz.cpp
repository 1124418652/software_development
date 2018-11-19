/****************************************************
    > File Name: random_quiz.cpp
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Sat 17 Nov 2018 01:43:33 PM CST
*****************************************************/

#include <iostream>
#include "fileOperation.h"

using namespace std;

int main(int argc, char **argv)
{
	studentList student, student1;
	student.push_back(Student("12", "xj", "+2"));
	writeStudentFile("student.txt", student);
	student1 = readStudentFile("student.txt");
	for (int i = 0; i < student1.size(); ++i){
		std::cout<<student[i].get_id()<<std::endl;
	}
	return 0;
}
