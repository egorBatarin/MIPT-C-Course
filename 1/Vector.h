namespace V
{

class Vector2D
{
  double x, y;
  public:
    Vector2D();
    void set_x(double _x);
    void set_y(double _y);
    void print();
    Vector2D(double x);
    Vector2D(double x, double y);
    double get_x();
    double get_y();
    Vector2D operator* (double n);
    Vector2D operator+ (Vector2D N);
    Vector2D operator- (Vector2D N);
    double operator* (Vector2D N);
    Vector2D* sum(Vector2D *X, Vector2D *Y);
    /*
    Vector2D* times(double n);
    double times(Vector2D* n);
    */
};

}
