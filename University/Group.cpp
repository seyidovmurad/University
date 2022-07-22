#include "Header.h"


//Bank Card
BankCard::BankCard(int password, int balance, int month, int year) {
	_password = password;
	_balance = balance;
	_expired_month = month;
	_expired_year = year;
}
BankCard::BankCard() {
	_password = 0;
	_balance = 0;
	_expired_month = 0;
	_expired_year = 0;
}
int BankCard::getPassword()const { return _password; }
int BankCard::getBalance()const { return _balance; }
int BankCard::getExMonth()const { return _expired_month; }
int BankCard::getExYear()const { return _expired_year; }
void BankCard::setBalance(const int balance) { _balance = balance; }

//Lesson
void Lesson::setName(const string& name) { _name = name; }
string Lesson::getName()const { return _name; }
Lesson::Lesson() { _name = "unknown"; }


//Exam
void Exam::setLesson(const Lesson& les) { _lesson = les; }
void Exam::setPoint(const int point) {
	if (point < 0 && point > 13)
		_point = 1;
	else
		_point = point;
}
int Exam::getPoint()const { return _point; }
const Lesson& Exam::getLesson()const { return _lesson; }
Exam::Exam(Lesson& lesson, int point) {
	setLesson(lesson);
	setPoint(point);
}


//Group
void Group::setName(const string& name) { _name = name; }
void Group::setStudent(const Student& student) { _students.push_back(student); }
void Group::setLesson(const Lesson& lesson) { _lessons.push_back(lesson); }
string Group::getName()const { return _name; }
const vector<Student>& Group::getStudents()const { return _students; }
const vector<Lesson>& Group::getLessons()const { return _lessons; }


