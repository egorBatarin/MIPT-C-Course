#include <stdio.h>
#include <stdlib.h>

class figure
{
  public:
    figure();
    double get_A();
    double get_L();
};

class disk:public figure
{
  protected:
    double r;
  public:
    disk();
    disk(double r);
    virtual double get_A();
    virtual double get_L();
    double get_r();
    void set_r(double r);
};

class triangle:public figure
{
  protected:
    double x1, y1;
    double x2, y2;
    double x3, y3;
  public:
    triangle();
    triangle(double x1, double y1, double x2, double y2, double x3, double y3);
    void set_xy(double x1, double y1, double x2, double y2, double x3, double y3);
    virtual double get_A();
    virtual double get_L();
    double get_x1();
    double get_y1();
    double get_x2();
    double get_y2();
    double get_x3();
    double get_y3();
};

class quadrilateral:public figure
{
  protected:
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;
  public:
    quadrilateral();
    quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    virtual double get_A();
    virtual double get_L();
    void set_xy(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    double get_x1();
    double get_y1();
    double get_x2();
    double get_y2();
    double get_x3();
    double get_y3();
    double get_x4();
    double get_y4();
};

class rectangle:public quadrilateral
{
  public:
    rectangle();
    rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
};

class square:public rectangle
{
  public:
    square();
    square(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
};
