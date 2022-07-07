#pragma once


namespace HeaderFiles {


	class Group
	{
	private:
		string _name;
		vector<Student> _students;
		vector<Lesson> _lessons;

	public:
		Group() = default;
		Group(string name) {
			_name = name;
		}

		void addStudent(Student student);

		void addLesson(Lesson lesson);
	};


	void Group::addStudent(Student student) {
		_students.push_back(student);
	}

	void Group::addLesson(Lesson lesson) {
		_lessons.push_back(lesson);
	}
}