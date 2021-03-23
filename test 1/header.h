#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>

class Frac
{
  int num, den;
  public:
    Frac(); //
    Frac(int num, int den); //
    Frac(double dec); //
    int get_num(); //
    int get_den(); //
    void set_num(int num); //
    void set_den(int den); //
    void print(); //
    void reduce(); //
    Frac operator* (Frac frac); //
    Frac operator+ (Frac frac); //
    Frac operator- (Frac frac); //
    Frac operator/ (Frac frac); //
    int IntPart(); //
    Frac operator++(); //
};

 int NOD(int a, int b); //
