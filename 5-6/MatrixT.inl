#include <iostream>
#include <stdlib.h>
#include <stdio.h>

template<typename T, int n, int m>
Matrix<T, n, m>::Matrix()
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      x[i][j] = 0;
}

template<typename T, int n, int m>
Matrix<T, n, m>::Matrix(std::array<std::array<T, m>, n> _x)
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      x[i][j] = _x[i][j];
}

template<typename T, int n, int m>
void Matrix<T, n, m>::set_x(std::array<std::array<T, m>, n> _x)
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      x[i][j] = _x[i][j]; 
}

template<typename T, int n, int m>
std::array<std::array<T, m>, n> Matrix<T, n, m>::get_x()
{
  return x;
}   

/*Matrix2x2 Matrix2x2::operator+ (Matrix2x2 A)
{
  double x = a + A.a;
  double y = b + A.b;
  double z = c + A.c;
  double f = d + A.d;
  return *new Matrix2x2(x, y, z, f);
}

Matrix2x2 Matrix2x2::operator- (Matrix2x2 A)
{
  double x = a - A.a;
  double y = b - A.b;
  double z = c - A.c;
  double f = d - A.d;
  return *new Matrix2x2(x, y, z, f);
}

Matrix2x2 Matrix2x2::operator* (Matrix2x2 A)
{
  double x = a * A.a + b * A.c;
  double y = a * A.b + b * A.d;
  double z = c * A.a + d * A.c;
  double f = c * A.b + d * A.d;
  return *new Matrix2x2(x, y, z, f);
}

Vector2D Matrix2x2::operator* (Vector2D A)
{
  double x = A.get_x();
  double y = A.get_y();
  double k = a * x + b * y;
  double f = c * x + d * y;
  return Vector2D(k, f);
}*/

template<typename T, int n, int m>
T Matrix<T, n, m>::determ ()
{
  try
  {
    if (n != m) throw 1;
    if (n == 1)
      return x[0][0];
    if (n == 2)
      return (x[0][0] * x[1][1] - x[0][1] * x[1][0]);
    if (n == 3)
      return (x[0][0] * x[1][1] * x[2][2] + x[0][1] * x[1][2] * x[2][0] + x[0][2] * x[1][0] * x[2][1] - x[0][2] * x[1][1] * x[2][0] - x[0][0] * x[1][2] * x[2][1] - x[0][1] * x[1][0] * x[2][2]);
    std::cout << "I don't know how to do it\n";
  }
  catch (int f)
  {
    std::cerr <<  "ERROR No.1: Matrix(n, m) n != m";
  }
  return 0;
}

template<typename T, int n, int m>
Matrix<T, n, m> Matrix<T, n, m>::operator= (Matrix<T, n, m> A)
{
  return *new Matrix<T, n, m>(A.x);
}


