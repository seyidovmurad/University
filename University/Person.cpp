#include "Header.h"


//Person
void Person::setName(const string& name) { _name = name; }
void Person::setSurname(const string& surname) { _surname = surname; }
void Person::setAge(const int age) { 
	if (age < 17)
		_age == 17;
	else
		_age = age;
};
void Person::setCard(const BankCard& card) { _card = card; }
string Person::getName()const { return _name; }
string Person::getSurname()const { return _surname; }
int Person::getAge()const { return _age; }
const BankCard& Person::getCard()const { return _card; }
Person::Person() {
	_name = "unknown";
	_surname = "unknown";
	_age = 0;
}


//Student
void Student::setSpecialty(const string& spec) { _specialty = spec; }
void Student::setExam(const Exam& exam) { _exams.push_back(exam); }
void Student::setAge(const int age) {
	if (age < 17)
		_age = 17;
	else
		_age = age;
}
void Student::setScholar(const int scholar) { _scholar = scholar; }
string Student::getSpecialty()const { return _specialty; }
int Student::getScore() {
	int size = 0;
	for (auto exam : _exams) { 
		_score += exam.getPoint();
		size++;
	}
	_score /= size;
	return _score;
}
int Student::getScholar()const { return _scholar; }
const vector<Exam>& Student::getExam()const { return _exams; }
Student::Student():Person() {
	_specialty = "unknown";
	_score = 0;
}


//Teacher
void Teacher::setSalary(const int salary){
	if (salary < 250)
		_salary = 250;
	else
		_salary = salary;
}
void Teacher::setAge(const int age) {
	if (age < 25)
		_age = 25;
	else
		_age = age;
}
void Teacher::setDepartment(const string& dep) { _department = dep; }
void Teacher::setGroup(const Group& group) { _groups.push_back(group); }
int Teacher::getSalary()const { return _salary; }
string Teacher::getDepartment()const { return _department; }
const vector<Group>& Teacher::getGroup()const { return _groups; }


