#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "header.h"


int main ()
{
  triangle ABC(1, 2, 3, 4, 5, 6);
  rectangle ABCD(0, 0, 0, 6, 1, 6, 1, 0);
  square PQRL(0, 0, 0, 1, 1, 1, 1, 0);
  double Striangle = ABC.get_A();
  double Ltriangle = ABC.get_L();
  double Srectangle = ABCD.get_A();
  double Lrectangle = ABCD.get_L();
  double Ssquare = PQRL.get_A();
  double Lsquare = PQRL.get_L();
  std::cout << "Striangle = " << Striangle << " Ltriangle =  " << Ltriangle << std::endl;
  std::cout << "Srectangle = " << Srectangle << " Lrectangle = " << Lrectangle << std::endl;
  std::cout << "Ssquare = " << Ssquare << " Lsquare = " << Lsquare << std::endl;
  return 0;
}

