#pragma once


namespace HeaderFiles {


	class Bank
	{
	private:
		string _name;
		vector<BankCard> _card;
	public:
		Bank(string name);

		void addCard(BankCard card) {
			_card.push_back(card);
		}
	};

	Bank::Bank(string name)
	{
		_name = name;
	}
}