#pragma once
#include "Book.h"
#include "Voice_Recording.h"
class Talking_book :virtual public Book, virtual public Voice_Recording
{
	int tapes;
public:
	Talking_book(string author, string edition, Date publication_date, long isbn
	, string speaker, int duration, Date recording_date, int tapes): Book(author, edition, publication_date, isbn), Voice_Recording(speaker, duration, recording_date),
		tapes(tapes){}
	Talking_book(Book a, Voice_Recording b , int tapes): Book(a), Voice_Recording(b), tapes(tapes){}
	void showInfo()const {
	Book::showInfo();
	Voice_Recording::showInfo();
		cout << tapes << endl;
	}
};

