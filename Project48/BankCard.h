#pragma once



namespace HeaderFiles {

	class BankCard
	{
	private:
		int static IdBankCard;
		int _id;
		string _longCod;
		int _password;
		int _cvv;
		int _balance;
		int _expriedYear;
		int _expriedMonth;
	public:
		BankCard() = default;

		BankCard(string longCod, int password, int cvv, int balance, int expriedYear, int expriedMonth)
			:_id(++IdBankCard)
		{
			_longCod = longCod;
			_password = password;
			_cvv = cvv;
			_balance = balance;
			_expriedYear = expriedYear;
			_expriedMonth = expriedMonth;
		}

		int getBalance() { return _balance; }
	};

	int BankCard::IdBankCard = 0;
}