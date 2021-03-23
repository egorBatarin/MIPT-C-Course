#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Vector.h"

Vector2D::Vector2D ()
{
  x = 0;
  y = 0;
}

Vector2D::Vector2D (double x)
{
  this->x = x;
  this->y = x;
}

Vector2D::Vector2D (double x, double y)
{
  this->x = x;
  this->y = y;
}

double Vector2D::get_x()
{
  return x;
}

double Vector2D::get_y()
{
  return y;
}

void Vector2D::set_x(double x)
{
  this->x = x;
}

void Vector2D::set_y(double y)
{
  this->y = y;
}

void Vector2D::print()
{
  std::cout << "x = " << x << " y = " << y;
}

Vector2D* Vector2D::times(double n)
{
  Vector2D* X = new Vector2D(n*x, n*y);
  return X;
}

double Vector2D::times(Vector2D* n)
{
  double a = n->x * x + n->y * y;
  return a;
}

Vector2D Vector2D::operator= (Vector2D A)
{
  return *new Vector2D(A.x, A.y);
}

