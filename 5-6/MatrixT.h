#include <array>

template<typename T, int n, int m>
class Matrix
{
  std::array<std::array<T, m>, n> x;
  public:
    Matrix();
    Matrix(std::array<std::array<T, m>, n> _x);
    void set_x(std::array<std::array<T, m>, n> _x);
    std::array<std::array<T, m>, n> get_x();
    /*Matrix2x2 operator+ (Matrix2x2 A);
    Matrix2x2 operator- (Matrix2x2 A);
    Matrix2x2 operator* (Matrix2x2 A);
    Vector2D operator* (Vector2D A);*/
    T determ ();
    Matrix<T, n, m> operator= (Matrix<T, n, m> A);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator+ (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator- (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator* (U a, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator* (Matrix<U, k, l> A, U b);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator* (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Vector2D<U, k> operator* (Matrix<U, k, l> A, Vector2D<U, l> B);
    template <typename U, int k, int l>
    friend Vector2D<U, l> operator* (Vector2D<U, k> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator++ (Matrix<U, k, l> &A);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> &operator++ (Matrix<U, k, l> &A, int a);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator-- (Matrix<U, k, l> &A);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> &operator-- (Matrix<U, k, l> &A, int a);
    template <typename U, int k, int l>
    friend std::ostream &operator<< (std::ostream &out, Matrix<U, k, l> &A);
    template <typename U, int k, int l>
    friend std::istream &operator>> (std::istream &in, Matrix<U, k, l> &A);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> &operator+= (Matrix<U, k, l> &A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> &operator-= (Matrix<U, k, l> &A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> &operator*= (Matrix<U, k, l> &A, U b);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator+ (Matrix<U, k, l> A);
    template <typename U, int k, int l>
    friend Matrix<U, k, l> operator- (Matrix<U, k, l> A);
    template <typename U, int k, int l>
    friend bool operator== (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator!= (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator< (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator> (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator<= (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator>= (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator&& (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator|| (Matrix<U, k, l> A, Matrix<U, k, l> B);
    template <typename U, int k, int l>
    friend bool operator! (Matrix<U, k, l> A);
};

#include "MatrixT.inl"
