/****************************************************
    > File Name: student.h
	> discription: declare the student class
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Wed 14 Nov 2018 10:41:11 PM CST
*****************************************************/
#include <string>
#include <iostream>

class Student{
private:
	std::string id;              // student id
	std::string name; 
	std::string scoreRecord;     // the score gained by answering question
public:
	Student(std::string t_id, std::string t_name, std::string t_scoreRecord):\
		id(t_id), name(t_name), scoreRecord(t_scoreRecord){}
	std::string get_id(){
		return id;
	}
	void set_id(std::string t_id){
		id = t_id; 
	}
	std::string get_name(){
		return name;
	}
	void set_name(std::string t_name){
		name = t_name;
	}
	std::string get_scoreRecord(){
		return scoreRecord;
	}
	void set_scoreRecord(std::string t_scoreRecord){
		scoreRecord = t_scoreRecord;
	}
	void cut_score(){
		scoreRecord = scoreRecord + "-2";
	}
	void add_score(){
		scoreRecord += "+2";
	}
};

