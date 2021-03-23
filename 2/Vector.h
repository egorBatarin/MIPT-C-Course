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

    Vector2D operator* (double n);
    Vector2D operator+ (Vector2D N);
    Vector2D operator- (Vector2D N);
    Vector2D* times(double n);
    double times(Vector2D* n);
    double operator* (Vector2D N);
    Vector2D* sum(Vector2D *X, Vector2D *Y);
};
