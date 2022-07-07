#pragma once


namespace HeaderFiles {

	class Human
	{
	private:
		string _name;
		string _surname;
		int _age;
		BankCard _card;
	public:
		Human() = default;
		Human(string name , string surname , int age , BankCard _card);

		void showBalance() {  
			cout << "Balance=>" << _card.getBalance() << endl;
		}

		void showStudent() {
			cout << "Name=>" <<_name << endl
				<< "Surname=>" << _surname << endl
				<< "Age=>" << _age << endl;
		}
	};

	Human::Human(string name, string surname, int age, BankCard card)
	{
		_name = name;
		_surname = surname;
		_age = age;
		_card = card;
	}

}