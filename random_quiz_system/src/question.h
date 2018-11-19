/****************************************************
    > File Name: question.h
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Wed 14 Nov 2018 11:56:55 PM CST
*****************************************************/

#include <string>
#include <iostream>

class Question{
private:
	std::string id;          // the number of question
	std::string title;       // the title of question
	std::string answerList;  // the list of answer
	std::string answer;      // correct answer
public:
	Question(std::string t_id, std::string t_title, std::string t_answerList,\
			 std::string t_answer): id(t_id), title(t_title),\
							   answerList(t_answerList),\
							   answer(t_answer){}
	Question() = default;
	std::string get_title(){
		return title;
	}
	void set_title(std::string t_title){
		title = t_title;
	}
	std::string get_answerList(){
		return answerList;
	}
	void set_answerList(std::string t_answerList){
		answerList = t_answerList;
	}
	std::string get_answer(){
		return answer;
	}
	void set_answer(std::string t_answer){
		answer = t_answer;
	}
	std::string get_id(){
		return id;
	}
	void set_id(std::string t_id){
		id = t_id;
	}
};
