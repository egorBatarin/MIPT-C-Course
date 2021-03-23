#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Vector.h"
using namespace V;


int main()
{
  Vector2D A = Vector2D(1,2);
  Vector2D B = Vector2D(3,4);
  A.set_x(5);
  A.set_y(6);
  //Vector2D* Z = sum (X, Y);
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
  return 0;
}
