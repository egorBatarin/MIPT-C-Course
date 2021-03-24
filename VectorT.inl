#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
//using namespace Vect;


template<typename T, int n>
Vector2D<T, n>::Vector2D () 
{
  for (int i = 0; i < n; ++i)
    x[i] = 0;	  
}

template<typename T, int n>
Vector2D<T, n>::Vector2D (T _x)
{
  for (int i = 0; i < n; ++i)
    x[i] = _x;
}

template<typename T, int n>
Vector2D<T, n>::Vector2D (std::array<T, n> _x)
{
  for (int i = 0; i < n; ++i)
    x[i] = _x[i];
}

template<typename T, int n>
std::array<T, n> Vector2D<T, n>::get_x()
{
  return x;
}

template<typename T, int n>
void Vector2D<T, n>::set_x(std::array<T, n> _x)
{
  for (int i = 0; i < n; ++i)
    x[i] = _x[i];
}

template<typename T, int n>
void Vector2D<T, n>::print()
{
  //std::cout << x[0] << " " << x[1] << " n=" << n;
  for (int i = 0; i < n; ++i) {
    std::cout << x[i] <<" ";
  }
  std::cout << "\n";
}

/*Vector2D* Vector2D::times(double n) 
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

template<typename T, int n>
Vector2D<T, n> Vector2D<T, n>::operator= (Vector2D<T, n> A)
{
  return *new Vector2D<T, n>(A.x);
}



/*Vector2D Vector2D::operator* (double n)
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

double Vector2D::operator* (Vector2D N)
{
  double a = N.x * this->x + N.y * this->y;
  return a;
}*/
