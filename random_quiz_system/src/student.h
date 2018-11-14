/****************************************************
    > File Name: student.h
	> discription: declare the student class
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Wed 14 Nov 2018 10:41:11 PM CST
*****************************************************/
#include <string>

class Student{
private:
	string id;              // student id
	string name; 
	int scoreRecord;     // the score gained by answering question
public:
	Student(string t_id, string t_name, int t_scoreRecord):\
		id(t_id), name(t_name), scoreRecord(t_scoreRecord){}
	string get_id(){
		return id;
	}
	void set_id(string t_id){
		id = t_id; 
	}
	string get_name(){
		return name;
	}
	void set_name(string t_name){
		name = t_name;
	}
	int get_scoreRecord(){
		return scoreRecord;
	}
	void set_scoreRecord(int t_scoreRecord){
		scoreRecord = t_scoreRecord;
	}
	void cut_score(){
		scoreRecord -= 2;
	}
	void add_score(){
		score += 2;
	}
}

