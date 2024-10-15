#include "Date.h"

std::ostream& operator<<(std::ostream& out, const Date& obj)
{
    out << obj.day << "." << obj.month << "." << obj.year;
    return out;
}
