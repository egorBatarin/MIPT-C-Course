#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "header.h"
#include <math.h>


figure::figure () {}


double figure::get_A ()
{
 return 0.0;
}

double figure::get_L ()
{
 return 0.0;
}

disk::disk ()
{
  r = 0.0;
}

disk::disk (double r)
{
  this->r = r;
}

double disk::get_r()
{
  return r;
}

void disk::set_r(double rad)
{
  this->r = r;
}

double disk::get_A()
{
  return 3.14*r*r;
}

double disk::get_L()
{
  return 2*3.14*r;
}

triangle::triangle ()
{
  x1 = 0;
  x2 = 0;
  x3 = 0;
  y1 = 0;
  y2 = 0;
  y3 = 0;
}

triangle::triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
  this->x1 = x1;
  this->x2 = x2;
  this->x3 = x3;
  this->y1 = y1;
  this->y2 = y2;
  this->y3 = y3;
}

double triangle::get_x1 ()
{
  return x1;
}

double triangle::get_x2 ()
{
  return x2;
}

double triangle::get_x3 ()
{
  return x3;
}

double triangle::get_y1 ()
{
  return y1;
}

double triangle::get_y2 ()
{
  return y2;
}

double triangle::get_y3 ()
{
  return y3;
}

void triangle::set_xy(double x1, double y1, double x2, double y2, double x3, double y3)
{
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
}


double triangle::get_A ()
{
  return 0.5 * ((x1 - x3) * (y2 - y3) - (y1 - y3) * (x2 - x3));
}

double triangle::get_L ()
{
  double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
  return a + b + c;
}

quadrilateral::quadrilateral ()
{
  x1 = 0;
  x2 = 0;
  x3 = 0;
  x4 = 0;
  y1 = 0;
  y2 = 0;
  y3 = 0;
  y4 = 0;
}

quadrilateral::quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
  this->x1 = x1;
  this->x2 = x2;
  this->x3 = x3;
  this->x4 = x4;
  this->y1 = y1;
  this->y2 = y2;
  this->y3 = y3;
  this->y4 = y4;
}


double quadrilateral::get_A ()
{
  double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  double c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
  double d = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
  double p = (a + b + c + d) / 2;
  return sqrt((p - a) * (p - b) * (p - c) * (p - d));
}

double quadrilateral::get_L ()
{
  double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  double c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
  double d = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
  return a + b + c + d;
}

void quadrilateral::set_xy(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;
}
rectangle::rectangle()
{
  x1 = 0;
  x2 = 0;
  x3 = 0;
  x4 = 0;
  y1 = 0;
  y2 = 0;
  y3 = 0;
  y4 = 0;
}

rectangle::rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
  this->x1 = x1;
  this->x2 = x2;
  this->x3 = x3;
  this->x4 = x4;
  this->y1 = y1;
  this->y2 = y2;
  this->y3 = y3;
  this->y4 = y4;
}


square::square()
{
  x1 = 0;
  x2 = 0;
  x3 = 0;
  x4 = 0;
  y1 = 0;
  y2 = 0;
  y3 = 0;
  y4 = 0;
}

square::square(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
  this->x1 = x1;
  this->x2 = x2;
  this->x3 = x3;
  this->x4 = x4;
  this->y1 = y1;
  this->y2 = y2;
  this->y3 = y3;
  this->y4 = y4;
}


