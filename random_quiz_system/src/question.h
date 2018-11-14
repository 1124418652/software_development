/****************************************************
    > File Name: question.h
    > Author: Hejun Xu
    > Mail: 1124418652@qq.com 
    > Created Time: Wed 14 Nov 2018 11:56:55 PM CST
*****************************************************/

#include <string>

class Question{
private:
	string id;          // the number of question
	string title;       // the title of question
	string answerList;  // the list of answer
	string answer;      // correct answer
public:
	Question(string t_id, string t_title, string t_answerList,\
			 string t_answer): id(t_id), title(t_title),\
							   answerList(t_answerList),\
							   answer(t_answer){}
	Question() = default;
	string get_title(){
		return title;
	}
	void set_title(string t_title){
		title = set_title;
	}
	string get_answerList(){
		return answerList;
	}
	void set_answerList(string t_answerList){
		answerList = t_answerList;
	}
	string get_answer(){
		return answer;
	}
	void set_answer(string t_answer){
		answer = t_answer;
	}
	string get_id(){
		return id;
	}
	void set_id(string t_id){
		id = t_id;
	}
}
