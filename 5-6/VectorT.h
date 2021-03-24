//namespace Vect
//{
#include <array>

template<typename T, int n>
class Vector2D
{
  std::array<T, n> x;
  public:
    Vector2D();
    Vector2D(T _x);
    Vector2D(std::array<T, n>_x);
    std::array<T, n> get_x();
    void set_x(std::array<T, n> _x);
    void print();
    Vector2D<T, n> operator= (Vector2D<T, n> A);
    //Vector2D<T>* times(T n);
    //T times(Vector2D<T>* n);
    //Vector2D operator* (double n);
    //Vector2D operator+ (Vector2D N);
    //Vector2D operator- (Vector2D N);
    //double operator* (Vector2D N);
    template <typename U, int m>
    friend Vector2D<U, m> operator+ (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> operator- (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> operator* (U a, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> operator* (Vector2D<U, m> A, U b);
    template <typename U, int m>
    friend U operator* (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> operator^ (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> operator++ (Vector2D<U, m> &A);
    template <typename U, int m>
    friend Vector2D<U, m> &operator++ (Vector2D<U, m> &A, int a);
    template <typename U, int m>
    friend Vector2D<U, m> operator-- (Vector2D<U, m> &A);
    template <typename U, int m>
    friend Vector2D<U, m> &operator-- (Vector2D<U, m> &A, int a);
    template <typename U, int m>
    friend std::ostream &operator<< (std::ostream &out, Vector2D<U, m> &A);
    template <typename U, int m>
    friend std::istream &operator>> (std::istream &in, Vector2D<U, m> &A);
    template <typename U, int m>
    friend Vector2D<U, m> &operator+= (Vector2D<U, m> &A, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> &operator-= (Vector2D<U, m> &A, Vector2D<U, m> B);
    template <typename U, int m>
    friend Vector2D<U, m> &operator*= (Vector2D<U, m> &A, U b);
    template <typename U, int m>
    friend Vector2D<U, m> operator+ (Vector2D<U, m> A);
    template <typename U, int m>
    friend Vector2D<U, m> operator- (Vector2D<U ,m> A);
    template <typename U, int m>
    friend bool operator== (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator!= (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator< (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator> (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator<= (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator>= (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator&& (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator|| (Vector2D<U, m> A, Vector2D<U, m> B);
    template <typename U, int m>
    friend bool operator! (Vector2D<U, m> A);
};


//}
#include "VectorT.inl"
 
