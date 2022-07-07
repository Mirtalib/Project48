#pragma once


namespace HeaderFiles {


	class Teacher :public Human
	{
	private:
		int static IdTeacher;
		int _id;
		vector<Group> _groups;
		size_t _slary;
		string _departament;
	public:
		Teacher(string name, string surname, int age, BankCard card
			, string departament, size_t salary);

		void addGroup(Group gruop) {
			_groups.push_back(gruop);
		}

		size_t getSalary() { return _slary; }

	};

	int Teacher::IdTeacher = 0;


	Teacher::Teacher(string name, string surname, int age, BankCard card
		, string departament, size_t salary)
		: Human(name, surname, age, card), _id(++IdTeacher)
	{
		_slary = salary;
		_departament = departament;
	}

}