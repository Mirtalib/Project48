#pragma once


namespace HeaderFiles {


	class Lesson
	{
	private:
		string _name;

	public:
		Lesson() = default;
		Lesson(string name);

		string getNameLesson() { return _name; }
	};

	Lesson::Lesson(string name)
	{
		_name = name;
	}

	

}