#include "header.h"

int main()
{
    Frac A, B = Frac(1,3);
    A.print();
    A.set_num(2);
    A.set_den(4);
    A.print();
    //std::cout << "NOD (-12,0) = " << NOD(-12, 0) << std::endl;
    Frac C = A * B;
    C.set_num(2);
    C.print();
    A.set_num(2);
    A.set_den(4);
    B.set_num(3);
    B.set_den(6);
    C = A + B;
    C.print();
    C = A - B;
    C.print();
    C.set_den(0);
    std::cout << "--------------------------------" << std::endl;
    C.print();
    //std::cout << round(1.5678*1000) << " \\ " << 1000 << std::endl;
    Frac F = Frac(156.2);
    F.print();
    std::cout << F.IntPart() << std::endl;
    ++F;
    F.print();
    return 0;
}
