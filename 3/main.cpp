#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Vector.h"




Vector2D operator+ (Vector2D A, Vector2D B)
{
  return *new Vector2D(A.x + B.x, A.y + B.y);
}

Vector2D operator- (Vector2D A, Vector2D B)
{
  return *new Vector2D(A.x - B.x, A.y - B.y);
}


Vector2D operator* (double a, Vector2D B)
{
  return *new Vector2D(a * B.x, a * B.y);
}

Vector2D operator* (Vector2D A, double b)
{
  return *new Vector2D(A.x * b, A.y * b);
}

double operator* (Vector2D A, Vector2D B)
{
  return (A.x * B.x + A.y * B.y);
}

Vector2D operator++ (Vector2D &A)
{
  ++A.x;
  ++A.y;
}

Vector2D &operator++ (Vector2D &A, int a)
{
  A.x++;
  A.y++;
}


Vector2D operator-- (Vector2D &A )
{
  --A.x;
  --A.y;
}

Vector2D &operator-- (Vector2D &A, int a)
{
  A.x--;
  A.y--;
}

std::ostream &operator<< (std::ostream &out, Vector2D &A)
{
  out << A.x << " " << A.y;
  return out;
}

std::istream &operator>> (std::istream &in, Vector2D &A)
{
  in >> A.x >> A.y;
  return in;
}

Vector2D &operator+= (Vector2D &A, Vector2D B)
{
  A.x += B.x;
  A.y += B.y;
}

Vector2D &operator-= (Vector2D &A, Vector2D B)
{
  A.x -= B.x;
  A.y -= B.y;
}

Vector2D &operator*= (Vector2D &A, double b)
{
  A.x *= b;
  A.y *= b;
}

Vector2D operator+ (Vector2D A)
{
  return *new Vector2D(A.x, A.y);
}

Vector2D operator- (Vector2D A)
{
  return *new Vector2D(-A.x, -A.y);
}


int main()
{

  Vector2D A = Vector2D(1,2);
  Vector2D B = Vector2D(3,4);
  A.set_x(5);
  A.set_y(6);
  Vector2D C =  Vector2D ();
  std::cout<< "Vector A:";
  A.print();
  std::cout<< "\n";
  std::cout<< "Vector B:";
  B.print();
  std::cout<< "\n";
  std::cout<< "Vector A+B:";
  C = A + B;
  C.print();
  std::cout<< "\n";
  Vector2D A6 = A*6;
  Vector2D AB = A + B;
  AB.print();
  std::cout<< "\n";
  ++AB;
  AB.print();
  std::cout<< "\n";
  AB++;
  AB.print();
  std::cout<< "\n";
  std::cout<< AB;
std::cout<< "\n";
    Vector2D T = Vector2D(1,2);
    Vector2D G = Vector2D(3,4);
    Vector2D *F = new Vector2D(0,0);
    (*F).print();

  return 0;
}

