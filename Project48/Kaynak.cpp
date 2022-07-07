#include<iostream>
#include<vector>

using namespace std;


#include"Exam.h"
#include"Lesson.h"
#include"BankCard.h"
#include"Bank.h"
#include"Human.h"
#include"Student.h"
#include"Group.h"
#include"Teacher.h"
#include"University.h"

using namespace HeaderFiles;

int main() {
	University uni("BDU");

	Bank bank1("Kapital");

	BankCard Bc("123456678", 1234, 123, 1300, 2023, 9);

	BankCard Bc2("3824437634", 2004, 867, 40000, 2027, 7);
	
	Group g("770");

	Lesson History("Sefeviler");

	Exam ex1("Inhertence", 12);

	Student s("Miri", "Huseynzade", 19, Bc, "Programist", 12, 150);

	Student s2("Murad", "Huseynov", 17, Bc, "Programist", 10, 80);

	Teacher t("Eltac", "Memmedov", 23, Bc2, "History", 1500);

	bank1.addCard(Bc);
	bank1.addCard(Bc2);

	s.showBalance();
	s.addExam(ex1);


	g.addLesson(History);
	g.addStudent(s);
	g.addStudent(s2);
	
	t.addGroup(g);
	
	uni.addStudent(s);
	uni.addStudent(s2);
	uni.addTeacher(t);


	cout <<"Score Uni=>" << uni.getUniversityScore() << endl;

	uni.showAllStudent();

	cout<<"Get Peyment=>" << uni.getPayment() << endl;
}
