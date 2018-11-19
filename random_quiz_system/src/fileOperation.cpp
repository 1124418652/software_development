/****************************************************
    > File Name: fileOperation.cpp
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Sat 17 Nov 2018 12:11:48 PM CST
*****************************************************/

#include "fileOperation.h"

studentList readStudentFile(const std::string filePath)
{
	studentList result;
	std::ifstream read;
	read.open(filePath, std::ifstream::in);
	if (read.good())
	{
		std::string id, name;
		std::string scoreRecord;
		while(read >> id >> name >> scoreRecord)
		{
			Student stu(id, name, scoreRecord);
			result.push_back(stu);
		}
		read.close();
	}
	else
	{
		std::cerr << "Can't open the file:" << filePath << std::endl; 
	}
	return result;
}

int writeStudentFile(const std::string filePath, studentList student)
{
	std::ofstream outFile;
	outFile.open(filePath, \
				 std::ofstream::out | std::ofstream::trunc);
	if (outFile.good())
	{
		for (int i = 0; i < student.size(); ++i){
			outFile << student[i].get_id() << "\t";
			outFile << student[i].get_name() << "\t";
			outFile << student[i].get_scoreRecord() << std::endl;
		}
		outFile.close();
		return 1;
	}
	else{
		std::cerr << "can't write to the file:" << filePath << std::endl;
		return 0;
	}
}

questionList readQuestionFile(const std::string filePath)
{
	questionList result;
	std::ifstream read;
	read.open(filePath, std::ifstream::in);
	if (read.good())
	{
		std::string id, title, answerList, answer;
		while(read >> id >> title >> answerList >> answer)
		{
			Question q(id, title, answerList, answer);
			result.push_back(q);			
		}
		read.close();
		return result;
	}
	else{
		std::cerr << "Can't read from the file:" << filePath << std::endl;
		return result;
	}
}
