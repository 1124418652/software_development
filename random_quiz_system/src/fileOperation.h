/****************************************************
    > File Name: fileOperation.h
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Sat 17 Nov 2018 12:01:05 PM CST
*****************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include "student.h"
#include "question.h"

typedef std::vector<Student> studentList;
typedef std::vector<Question> questionList;

studentList readStudentFile(const std::string filePath);
int writeStudentFile(const std::string filePath, studentList student);
questionList readQuestionFile(const std::string filePath);

