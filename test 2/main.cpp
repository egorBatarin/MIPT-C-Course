#include "header.h"

int main()
{
    Data A(2,23);
    //std::cout << A.get_m() << std::endl;
    //std::cout << A.get_d() << std::endl;
    Data B(3,24);
    //std::cout << B.get_m() << std::endl;
    //std::cout << B.get_d() << std::endl;
    Data C = A + B;
    //std::cout << C.get_m() << std::endl;
    //std::cout << C.get_d() << std::endl;
    Data D = A - B;
    //std::cout << D.get_m() << std::endl;
    //std::cout << D.get_d() << std::endl;
    Data F = D + B; //= A(2, 23)
    //std::cout << F.get_m() << std::endl;
    //std::cout << F.get_d() << std::endl;
    F.set_d(30);
    F.set_m(3);
    //std::cout << F.get_m() << std::endl;
    //std::cout << F.get_d() << std::endl;
    Datas S(2021,3,24);
    //std::cout << S.get_m() << std::endl;
    //std::cout << S.get_d() << std::endl;
    //std::cout << S.get_y() << std::endl;
    Datas K(1,12,12);
    Datas T = S + K;
    //std::cout << T.get_m() << std::endl;
    //std::cout << T.get_d() << std::endl;
    //std::cout << T.get_y() << std::endl;
    Datas P = K - S;
    //std::cout << P.get_m() << std::endl;
    //std::cout << P.get_d() << std::endl;
    //std::cout << P.get_y() << std::endl;
    Datas M = P + S;
    //std::cout << M.get_m() << std::endl;
    //std::cout << M.get_d() << std::endl;
    //std::cout << M.get_y() << std::endl;



}
