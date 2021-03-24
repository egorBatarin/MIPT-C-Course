#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "VectorT.h"
#include "MatrixT.h"
#include <array>


double sum (double x, double y)
{
  return x+y;
}

/*Vector2D* sum (Vector2D *X, Vector2D *Y)
{
  double xx = X->get_x();
  double xy = X->get_y();
  double yx = Y->get_x();
  double yy = Y->get_y();
  Vector2D *Z = new Vector2D(xx+yx, xy+yy);
  return Z;
}*/

template<typename U, int m>
Vector2D<U, m> operator+ (Vector2D<U, m> A, Vector2D<U, m> B)
{
  //if (k != m) throw 1;
  std::array<U, m> z;
  for (int i = 0; i < m; ++i)
    z[i] = A.x[i] + B.x[i];
  return *new Vector2D<U, m>(z);
}

template<typename U, int m>
Vector2D<U, m> operator- (Vector2D<U, m> A, Vector2D<U, m> B)
{
  std::array<U, m> z;
  for (int i = 0; i < m; ++i)
    z[i] = A.x[i] - B.x[i];
  return *new Vector2D<U, m>(z);
}


template<typename U, int m>
Vector2D<U, m> operator* (U a, Vector2D<U, m> B)
{
  std::array<U, m> z;
  for (int i = 0; i < m; ++i)
    z[i] = a * B.x[i];
  return *new Vector2D<U, m>(z);
}
  
template<typename U, int m>
Vector2D<U, m> operator* (Vector2D<U, m> A, U b)
{
  std::array<U, m> z;
  for (int i = 0; i < m; ++i)
    z[i] = A.x[i] * b;
  return *new Vector2D<U, m>(z);
}

template<typename U, int m>
U operator* (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U z = 0;
  for (int i = 0; i < m; ++i)
    z += A.x[i] * B.x[i];
  return z;
}

template<typename U, int m>
Vector2D<U, m> operator^ (Vector2D<U, m> A, Vector2D<U, m> B)
{
  try
  {
    if (m != 3) throw 1;
    std::array<U, m> z;
    z[0] = A.x[1] * B.x[2] - B.x[1] * A.x[2];
    z[1] = A.x[2] * B.x[0] - B.x[2] * A.x[0];
    z[2] = A.x[0] * B.x[1] - B.x[0] * A.x[1];
  return *new Vector2D<U, m>(z);
  }
  catch (int a)
  {
    std::cout << "Error No." << a << "\n";
  }
  return *new Vector2D<U, m>();
}

template<typename U, int m>
Vector2D<U, m> operator++ (Vector2D<U, m> &A)
{
  for (int i = 0; i < m; i++)
    ++(A.x[i]);
  return A;
}

template<typename U, int m>
Vector2D<U, m> &operator++ (Vector2D<U, m> &A, int a)
{
  for (int i = 0; i < m; i++)
    (A.x[i])++;
  return A;
}


template<typename U, int m>
Vector2D<U, m> operator-- (Vector2D<U, m> &A )
{
  for (int i = 0; i < m; i++)
    --(A.x[i]);
  return A;
}

template<typename U, int m>
Vector2D<U, m> &operator-- (Vector2D<U, m> &A, int a)
{
  for (int i = 0; i < m; i++)
    (A.x[i])--;
  return A;
}

template<typename U, int m>
std::ostream &operator<< (std::ostream &out, Vector2D<U, m> &A)
{
  for (int i = 0; i < m; i++)
    out << A.x[i] << " ";
  out << "\n";
  return out;
}

template<typename U, int m>
std::istream &operator>> (std::istream &in, Vector2D<U, m> &A)
{
  for (int i = 0; i < m; i++)
    in >> A.x[i];
  return in;
}

template<typename U, int m>
Vector2D<U, m> &operator+= (Vector2D<U, m> &A, Vector2D<U, m> B)
{
  for (int i = 0; i < m; i++)
    A.x[i] += B.x[i];
}

template<typename U, int m>
Vector2D<U, m> &operator-= (Vector2D<U, m> &A, Vector2D<U, m> B)
{
  for (int i = 0; i < m; i++)
    A.x[i] -= B.x[i];
}

template<typename U, int m>
Vector2D<U, m> &operator*= (Vector2D<U, m> &A, double b)
{
  for (int i = 0; i < m; i++)
    A.x[i] *= b;
}

template<typename U, int m>
Vector2D<U, m> operator+ (Vector2D<U, m> A)
{
  return *new Vector2D<U, m>(A.x);
}

template<typename U, int m>
Vector2D<U, m> operator- (Vector2D<U, m> A)
{
  std::array<int, m> y;
  for (int i = 0; i < m; i++)
    y[i] = -A.x[i];
  return *new Vector2D<U, m>(y);
}

template<typename U, int m>
bool operator== (Vector2D<U, m> A, Vector2D<U, m> B)
{
  for (int i = 0; i < m; i++)
    if (A.x[i] != B.x[i])
      return 0;
  return 1;
}


template<typename U, int m>
bool operator!= (Vector2D<U, m> A, Vector2D<U, m> B)
{
  for (int i = 0; i < m; i++)
    if (A.x[i] == B.x[i])
      {
        //std::cout << "Proga dumaet chto: " << A.x[i] << " == " << B.x[i] << "\n";
        return 0;
      }
  return 1;
}


template<typename U, int m>
bool operator< (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U a = 0;
  U b = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
    b += B.x[i] * B.x[i];
  }
  if (a < b)
    return 1;
  return 0;
}

template<typename U, int m>
bool operator> (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U a = 0;
  U b = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
    b += B.x[i] * B.x[i];
  }
  if (a > b)
    return 1;
  return 0;
}

template<typename U, int m>
bool operator<= (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U a = 0;
  U b = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
    b += B.x[i] * B.x[i];
  }
  if (a <= b)
    return 1;
  return 0;
}

template<typename U, int m>
bool operator>= (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U a = 0;
  U b = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
    b += B.x[i] * B.x[i];
  }
  if (a >= b)
    return 1;
  return 0;
}

template<typename U, int m>
bool operator&& (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U a = 0;
  U b = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
    b += B.x[i] * B.x[i];
  }
  if ((a == b) && (a != 0))
    return 1;
  return 0;
}

template<typename U, int m>
bool operator|| (Vector2D<U, m> A, Vector2D<U, m> B)
{
  U a = 0;
  U b = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
    b += B.x[i] * B.x[i];
  }
  if ((a != 0) ||  (b != 0))
    return 1;
  return 0;
}

template<typename U, int m>
bool operator! (Vector2D<U, m> A)
{
  U a = 0;
  for (int i = 0; i < m; i++)
  {
    a += A.x[i] * A.x[i];
  }
  if (a != 0)
    return 0;
  return 1;
}




template<typename U, int k, int l>
Matrix<U, k, l> operator+ (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  //if (k != m) throw 1;
  std::array<std::array<U, l>, k> z;
  for (int i = 0; i < k; ++i)
    for (int j = 0; j < l; ++j)
      z[i][j] = A.x[i][j] + B.x[i][j];
  return *new Matrix<U, k, l>(z);
}

template<typename U, int k, int l>
Matrix<U, k, l> operator- (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  std::array<std::array<U, l>, k> z;
  for (int i = 0; i < k; ++i)
    for (int j = 0; j < l; ++j)
      z[i][j] = A.x[i][j] - B.x[i][j];
  return *new Matrix<U, k, l>(z);
}


template<typename U, int k, int l>
Matrix<U, k, l> operator* (U a, Matrix<U, k, l> B)
{
  std::array<std::array<U, l>, k> z;
  for (int i = 0; i < k; ++i)
    for (int j = 0; j < l; ++j)
      z[i][j] = a * B.x[i][j];
  return *new Matrix<U, k, l>(z);
}
  
template<typename U, int k, int l>
Matrix<U, k, l> operator* (Matrix<U, k, l> A, U b)
{
  std::array<std::array<U, l>, k> z;
  for (int i = 0; i < k; ++i)
    for (int j = 0; j < l; ++j)
      z[i][j] = A.x[i][j] * b;
  return *new Matrix<U, k, l>(z);
}

template<typename U, int k, int l>
U operator* (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  try 
  {
    if (k != l) throw "fuck";
    std::array<std::array<U, l>, k> z;
    U a;
    U b;
    for (int i = 0; i < k; ++i)
      for (int j = 0; j < l; ++j)
      {
        z[i][j] = 0;
        for (int f = 0; f < k; ++f)
          z[i][j] += A.x[i][f] * B.x[f][j];
      }
    return *new Matrix<U, k, l>(z);
  }
  catch (const char* a)
  {
    std::cerr << "Kol-vo stolbcov != kol-vu strok\n";
  }
  return *new Matrix<U, k, l>();
}

template<typename U, int k, int l>
Vector2D<U, k> operator* (Matrix<U, k, l> A, Vector2D<U, l> B)
{
  std::array<U, k> z;
  for (int i = 0; i < k; ++i)
  {
    for (int j = 0; j < l; ++j)
      z[i] += A.x[i][j] * B.x[j];
  }
  return *new Vector2D<U, k>(z);
}

template<typename U, int k, int l>
Vector2D<U, l> operator* (Vector2D<U, k> A, Matrix<U, k, l> B)
{
  std::array<U, l> z;
  for (int i = 0; i < l; ++i)
  {
    for (int j = 0; j < k; ++j)
      z[i] += A.x[j][i] * B.x[j];
  }
  return *new Vector2D<U, l>(z);
}

template<typename U, int k, int l>
Matrix<U, k, l> operator++ (Matrix<U, k, l> &A)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; ++j)
      ++(A.x[i][j]);
  return A;
}

template<typename U, int k, int l>
Matrix<U, k, l> &operator++ (Matrix<U, k, l> &A, int a)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; ++j)
      (A.x[i][j])++;
  return A;
}


template<typename U, int k, int l>
Matrix<U, k, l> operator-- (Matrix<U, k, l> &A )
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; ++j)
      --(A.x[i][j]);
  return A;
}

template<typename U, int k, int l>
Matrix<U, k, l> &operator-- (Matrix<U, k, l> &A, int a)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; ++j)
      (A.x[i][j])--;
  return A;
}

template<typename U, int k, int l>
std::ostream &operator<< (std::ostream &out, Matrix<U, k, l> &A)
{
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < l; j++)
      out << A.x[i][j] << " ";
    out << "\n";
  }
  return out;
}

template<typename U, int k, int l>
std::istream &operator>> (std::istream &in, Matrix<U, k, l> &A)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
      in >> A.x[i][j];
  return in;
}

template<typename U, int k, int l>
Matrix<U, k, l> &operator+= (Matrix<U, k, l> &A, Matrix<U, k, l> B)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
     A.x[i][j] += B.x[i][j];
}

template<typename U, int k, int l>
Matrix<U, k, l> &operator-= (Matrix<U, k, l> &A, Matrix<U, k, l> B)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
     A.x[i][j] -= B.x[i][j];
}

template<typename U, int k, int l>
Matrix<U, k, l> &operator*= (Matrix<U, k, l> &A, U b)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
     A.x[i][j] *= b;
}

template<typename U, int k, int l>
Matrix<U, k, l> operator+ (Matrix<U, k, l> A)
{
  return *new Matrix<U, k, l>(A.x);
}

template<typename U, int k, int l>
Matrix<U, k, l> operator- (Matrix<U, k, l> A)
{
  std::array<std::array<U, l>, k> y;
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
      y[i][j] = -A.x[i][j];
  return *new Matrix<U, k, l>(y);
}

template<typename U, int k, int l>
bool operator== (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
      if (A.x[i][j] != B.x[i][j])
        return 0;
  return 1;
}


template<typename U, int k, int l>
bool operator!= (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  for (int i = 0; i < k; i++)
    for (int j = 0; j < l; j++)
      if (A.x[i][j] == B.x[i][j])
        return 0;
  return 1;
}


template<typename U, int k, int l>
bool operator< (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  if (A.x[0][0] < B.x[0][0])
    return 1;
  return 0;
}

template<typename U, int k, int l>
bool operator> (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  if (A.x[0][0] > B.x[0][0])
    return 1;
  return 0;
}

template<typename U, int k, int l>
bool operator<= (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  if (A.x[0][0] <= B.x[0][0])
    return 1;
  return 0;
}

template<typename U, int k, int l>
bool operator>= (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  if (A.x[0][0] >= B.x[0][0])
    return 1;
  return 0;
}

template<typename U, int k, int l>
bool operator&& (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  if ((A.x[0][0] != 0) && (B.x[0][0] != 0))
    return 1;
  return 0;
}

template<typename U, int k, int l>
bool operator|| (Matrix<U, k, l> A, Matrix<U, k, l> B)
{
  if ((A.x[0][0] != 0) || (B.x[0][0] != 0))
    return 1;
  return 0;
}

template<typename U, int k, int l>
bool operator! (Matrix<U, k, l> A)
{
  if (A.x[0][0] == 0)
    return 1;
  return 0;
}






const int n = 4;


int main()
{
  std::array<int, n> x;
  for (int i = 0; i < n; ++i)
    std::cin >> x[i];
  Vector2D<int, n> A = *new Vector2D<int, n>(x);
  std::array<int, n> y;
  for (int i = 0; i < n; ++i)
    std::cin >> y[i];
  Vector2D<int, n> B = *new Vector2D<int, n>(y);
  if (A == B) std::cout << "A == B\n";
  Vector2D<int, n> sum = A + B;
  Vector2D<int, n> raz = A - B;
  Vector2D<int, n> pr1 = 2 * B;
  Vector2D<int, n> pr2 = A * 2;
  Vector2D<int, n> prs = A * B;
  Vector2D<int, n> vcpr = A ^ B;
  Vector2D<int, n> A1 = ++A;
  Vector2D<int, n> A2 = A++;
  Vector2D<int, n> B1 = B--;
  Vector2D<int, n> B2 = --B;
  std::cout << sum;
  raz.print();
  pr1.print();
  pr2.print();
  prs.print();
  vcpr.print();
  A1.print();
  A2.print();
  B1.print();
  B2.print();
  std::cout << "\n\n\n\nA teper Matrix\n";
  std::array<std::array<int, 3>, 3> l;
  l[0] = {1, 2, 3};
  l[1] = {4, 5, 6};
  l[2] = {7, 8, 9};
  Matrix<int, 3, 3> K = *new Matrix<int, 3, 3>(l);
  ++K;
  int determ = K.determ();
  std::cout << "determinant ot" << K << "\n = " << determ <<"\n";
  return 0;
} 

