#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Vector.h"

using namespace V;

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

double Vector2D::operator* (Vector2D N)
{
  return (N.x * this->x + N.y * this->y);
}




Vector2D Vector2D::operator* (double n)
{
  Vector2D Z = Vector2D(this->x * n, this->y * n);
  return Z;
}




Vector2D Vector2D::operator+ (Vector2D N)
{
  return Vector2D(N.x + this->x, N.y + this->y);
}

Vector2D Vector2D::operator- (Vector2D N)
{
  return Vector2D(this->x - N.x, this->y - N.y);
}


Vector2D* Vector2D::sum (Vector2D *X, Vector2D *Y)
{
  double xx = X->get_x();
  double xy = X->get_y();
  double yx = Y->get_x();
  double yy = Y->get_y();
  Vector2D *Z = new Vector2D(xx+yx, xy+yy);
  return Z;
}
/*
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
*/
