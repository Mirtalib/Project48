#pragma once

namespace HeaderFiles {


	class Student:public Human
	{
	private:
		int static IdStudent;
		int _id;
		string _sepcialty;
		size_t _score;
		size_t _money;

		vector<Exam> _exams;
	public:
		Student(string name, string surname, int age, BankCard card
			, string _sepcialty, size_t _score, size_t _money);

		void addExam(Exam exam);

		size_t getScore() { return _score; }
		size_t getMoney() { return _money; }


		void showStudent() {
			
			cout << "Id=>" << _id << endl;
			Human::showStudent();
			cout << "Score=>" << _score << endl
				<< "Money=>" << _money << endl <<
				"Exams:" << endl;

			for (size_t i = 0; i < _exams.size(); i++)
			{
				cout << _exams[i] << endl;
			}
		}

	};


	int Student::IdStudent = 0;


	Student::Student(string name, string surname, int age, BankCard card
		, string sepcialty, size_t score, size_t money)
		: Human(name, surname, age, card),_id(++IdStudent)
	{
		_sepcialty = sepcialty;
		_score = score;
		_money = money;
	}


	void Student::addExam(Exam exam) {
		_exams.push_back(exam);
	}
}