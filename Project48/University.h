#pragma once


namespace HeaderFiles {

	class University
	{
	private:
		string _name;
		vector<Teacher> _teacher;
		vector<Student> _student;
	public:
		University() = default;
		University(string name);

		void addTeacher(Teacher teacher);
		void addStudent(Student student);

		size_t getUniversityScore();

		void showAllStudent();


		size_t getPayment();
	};

	University::University(string name)
	{
		_name = name;
	}

	void University::addStudent(Student student) {
		_student.push_back(student);
	}

	void University::addTeacher(Teacher teacher) {
		_teacher.push_back(teacher);
	}


	size_t University::getUniversityScore(){

		size_t score = 0;

		for (size_t i = 0; i < _student.size(); i++)
		{
			score += _student[i].getScore();
		}

		return score;
	}



	void University::showAllStudent() {

		for (size_t i = 0; i < _student.size(); i++)
		{
			_student[i].showStudent();
		}
	}


	size_t University::getPayment(){
	

		size_t score = 0;

		for (size_t i = 0; i < _student.size(); i++)
		{
			score += _student[i].getMoney();
		}

		for (size_t i = 0; i < _teacher.size(); i++)
		{
			score += _teacher[i].getSalary();
		}


		return score;
	
	}
}