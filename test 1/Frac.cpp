#include "header.h"


Frac::Frac()
{
    num = 1;
    den = 1;
}

Frac::Frac(int num, int den)
{   if (den == 0)
    {
        std::cout << "Denominator != 0. 1/1 initialization..." << std::endl;
        Frac();
    }
    else
    {
        int a = 1;
        this->num = num / a;
        this->den = den / a;
    }
}

int Frac::get_num()
{
    return this->num;
}

int Frac::get_den()
{
    return this->den;
}

void Frac::print()
{
    reduce();
    if (get_num() % get_den() == 0)
    {
        int a = get_num()/get_den();
        std::cout << a << std::endl;
    }
    else
        std::cout  << get_num() << " \\ " << get_den() << std::endl;
}

void Frac::set_num(int num)
{
    this->num = num;
}

void Frac::set_den(int den)
{
    if (den == 0)
    {
        std::cout << "Denominator = 0. Den := 1." << std::endl;
        this->den = 1;
    }
    else
        this->den = den;
}

int NOD(int a, int b)
{
    int c;
   if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
   while(b != 0)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}

void Frac::reduce()
{
    int nod = NOD(this->den, this->num);
    set_den(this->den/nod);
    set_num(this->num/nod);
}

Frac Frac::operator* (Frac frac)
{
    int a = this->num * frac.get_num();
    int b = this->den * frac.get_den();
    int nod = NOD(a, b);
    a /= nod;
    b /= nod;
    return *new Frac(a,b);
}


Frac Frac::operator+ (Frac frac)
{
    int a = this->num * frac.get_den() + this->den * frac.get_num();
    int b = this->den * frac.get_den();
    int nod = NOD(a, b);
    a /= nod;
    b /= nod;
    return *new Frac(a,b);
}

Frac Frac::operator- (Frac frac)
{
    int a = this->num * frac.get_den() - this->den * frac.get_num();
    int b = this->den * frac.get_den();
    int nod = NOD(a, b);
    a /= nod;
    b /= nod;
    return *new Frac(a,b);
}

Frac Frac::operator/ (Frac frac)
{
    if (frac.get_num() == 0)
    {
        std::cout << "Divide by 0. 1/1 init..." << std::endl;
        return *new Frac();
    }
    else
    {
        int a = this->num * frac.get_den();
        int b = this->den * frac.get_num();
        int nod = NOD(a, b);
        a /= nod;
        b /= nod;
        return *new Frac(a,b);
    }
}

Frac::Frac(double dec)
{
    std::cout << "Hello!" << std::endl;
    int a = round(dec * 100000);
    int nod = NOD(a, 100000);
    num = a/nod;
    den = 100000/nod;
}

int Frac::IntPart()
{
    double a = this->num / this->den;
    return trunc(a);
}

Frac Frac::operator++()
{
	if(den > 0)
		this->set_num(num + den);
	else
		this->set_num(num - den);
	this->set_den(den);
	return *new Frac(this->get_num(), this->get_den());
}
