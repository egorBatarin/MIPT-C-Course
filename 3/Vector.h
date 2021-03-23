
class Vector2D
{
  double x, y;
  public:
    Vector2D();
    Vector2D(double x);
    Vector2D(double x, double y);
    double get_x();
    double get_y();
    void set_x(double _x);
    void set_y(double _y);
    void print();
    Vector2D* times(double n);
    double times(Vector2D* n);
    friend Vector2D operator+ (Vector2D A, Vector2D B);
    friend Vector2D operator- (Vector2D A, Vector2D B);
    friend Vector2D operator* (double a, Vector2D B);
    friend Vector2D operator* (Vector2D A, double b);
    friend double operator* (Vector2D A, Vector2D B);
    friend Vector2D operator++ (Vector2D &A);
    friend std::ostream &operator<< (std::ostream &out, Vector2D &A);
    friend std::istream &operator>> (std::istream &in, Vector2D &A);
    friend Vector2D &operator++ (Vector2D &A, int a);
    friend Vector2D operator-- (Vector2D &A);
    friend Vector2D &operator-- (Vector2D &A, int a);
    friend Vector2D &operator+= (Vector2D &A, Vector2D B);
    friend Vector2D &operator-= (Vector2D &A, Vector2D B);
    friend Vector2D &operator*= (Vector2D &A, double b);
    friend Vector2D operator+ (Vector2D A);
    friend Vector2D operator- (Vector2D A);
    Vector2D operator= (Vector2D A);
};


//}
