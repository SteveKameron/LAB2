#include <iostream>
#include <math.h>

int main() {
    int p, a, E;
    std::cin >> p;
    std::cin >> a;
    std::cin >> E; // Погрешность E = 10^-2, ..., 10^-6

    double xN1, xN, xX, Eps;
    Eps = pow(10, -E);
    xN = a;
    xX = a;
    xN1 = 0;

    double xQ;
    xQ = pow((double)a, 1. / p);
    int iter = 0;

    while (abs(xN1 - xQ) > Eps) {
        xN = xX;
        xN1 = (1. / p) * ((p - 1) * xN + (a / pow(xN, p - 1)));
        xX = xN1;
        iter++;
        std::cout << "xN = " << xN << " xX = " << xX << " xN1 = " << xN1 << std::endl;

    };
    std::cout << "xQ = " << xQ << std::endl;

    std::cout << "Amount of iterations = " << iter << std::endl;
    std::cout << "xN1 = " << xN1 << " xQ = " << xQ;


    return 0;
}