#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>

class Data
{
    protected:
        int month;
        int day;
    public:
        Data();
        Data(int month, int day);
        virtual void reduce();
        virtual Data operator+ (Data A);
        virtual Data operator- (Data A);
        int get_m();
        int get_d();
        virtual void set_m(int month);
        void set_d(int day);
};

class Datas: public Data
{
    protected:
        int year;
    public:
        Datas();
        Datas(int year,int month, int day);
        int get_y();
        void reduce();
        Datas operator+ (Datas A);
        Datas operator- (Datas A);
        void set_m(int month);
        void set_y(int year);
};
