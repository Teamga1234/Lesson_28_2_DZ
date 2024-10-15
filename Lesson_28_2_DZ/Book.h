#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Book
{
protected:
	string author;
	string edition;
	Date publication_date;
	long isbn;
public:
	Book(string author, string edition, Date publication_date, long isbn) :
		author(author), edition(edition), publication_date(publication_date),
		isbn(isbn){}
	Book(string author, string edition, int year, int month, int day, long isbn) :
		author(author), edition(edition), publication_date(year, month, day),
		isbn(isbn) {}
	void showInfo()const
	{
		cout << author << endl;
		cout << edition << endl;
		cout << publication_date << endl;
		cout << isbn << endl;

	}
};

