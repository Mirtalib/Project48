#pragma once



namespace HeaderFiles {


	class Exam
	{
	private:
		string _lesson;
		int _point;
	public:
		Exam() = default;
		Exam(string lesson , int point);

		friend ostream& operator<<(ostream& output, Exam s);

	};

	Exam::Exam(string lesson, int point)
	{
		_lesson = lesson;
		_point = point;
	}
	ostream& operator<<(ostream& output, Exam s) {
		cout << "Lesson=>" << s._lesson << endl
			<< "Point=>" << s._point << endl;

		return output;
	}

}