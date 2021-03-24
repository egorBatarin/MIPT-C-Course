#include "header.h"

Data::Data()
{
    month = 1;
    day = 1;
}

Data::Data(int month, int day)
{
    if (!((-1 < day) & ( day < 31)))
        {
            std::cout << "Invalid day" << std::endl;
            exit(-1);
        }
    this->month = month;
    this->day = day;
    //reduce();
}

void Data::reduce()
{
    int d = this->day;
    int plusmonths = d / 31;
    int plusdays = d % 31;
    this->month += plusmonths;
    if (plusmonths > 0)
         this->day = plusdays;
}

int Data::get_d()
{
    return this->day;
}

int Data::get_m()
{
    return this->month;
}

Data Data::operator+ (Data A)
{
    int d1 = this->day;
    int m1 = this->month;
    int d2 = A.get_d();
    int m2 = A.get_m();
    int d = d1 + d2;
    int m = m1 + m2;
    int plusmonths = d / 31;
    int plusdays = d % 31;
    m += plusmonths;
    if (plusmonths > 0)
         d = plusdays;
    return Data(m,d);
}


Data Data::operator- (Data A)
{
    int d1 = this->day;
    int m1 = this->month;
    int d2 = A.get_d();
    int m2 = A.get_m();
    int d = d1 - d2;
    int m = m1 - m2;
    if (!(d < 0))
        return Data(m,d);
    else
        return Data(m - 1, 31 + d);
}

void Data::set_m(int month)
{
    this->month = month;
}

void Data::set_d(int day)
{
    if (!((-1 < day) & ( day < 31)))
        {
            std::cout << "Invalid day" << std::endl;
            exit(-1);
        }
    this->day = day;
}

Datas::Datas()
{
    day = 1;
    month = 1;
    year = 1;
}
Datas::Datas(int year,int month, int day)
{
    if (!((-1 < month) & ( month < 13)))
        {
            std::cout << "Invalid month" << std::endl;
            exit(-1);
        }
    this-> month = month;
    this->year = year;
    this->day = day;
}

int Datas::get_y()
{
    return this->year;
}

void Datas::reduce()
{
    int d = this->day;
    int m = this->month;
    int plusmonths = d / 31;
    int plusdays = d % 31;
    this->month += plusmonths;
    if (plusmonths > 0)
         this->day = plusdays;
    int plusyears = m/13;
    this->year += plusyears;
    if (plusyears > 0)
         this->month = m % 13;
}

Datas Datas::operator+ (Datas A)
{   int y1 = this->year;
    int d1 = this->day;
    int m1 = this->month;
    int d2 = A.get_d();
    int m2 = A.get_m();
    int y2 = A.get_y();
    int d = d1 + d2;
    int m = m1 + m2;
    int y = y1 + y2;
    int plusmonths = d / 31;
    int plusdays = d % 31;
    m += plusmonths;
    if (plusmonths > 0)
         d = plusdays;
    int plusyears = m/13;
    y += plusyears;
    if (plusyears > 0)
         m = m % 13;
    return Datas(y,m,d);
}

Datas Datas::operator- (Datas A)
{
    int d1 = this->day;
    int m1 = this->month;
    int y1 = this->year;
    int d2 = A.get_d();
    int m2 = A.get_m();
    int y2 = A.get_y();
    int d = d1 - d2;
    int m = m1 - m2;
    int y = y1 - y2;
    if (d < 0) {
        m -= 1;
        d = 31 + d;
    }
    if (m < 0) {
        y -= 1;
        d = 13 + d;
    }
    return Datas(y,m,d);
}


void Datas::set_m(int month)
{
    if (!((-1 < month) & (month < 13)))
        {
            std::cout << "Invalid month" << std::endl;
            exit(-1);
        }
    this->month = month;
}

void Datas::set_y(int year)
{
    this->year = year;
}

