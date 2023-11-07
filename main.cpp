#include "Vector.h"

[[maybe_unused]] void testVector() {
    Vector v1(0.1, 3);
    Vector v2(1, 0.3);
    Vector v3(4, 3);
    Vector v4(21, 5);

    Vector sumVector = v1 + 2*v2 - v3 + v4;
    std::cout << sumVector.toStr() << std::endl;
    std::cout << sumVector.toPolar().toStr() << std::endl;

    std::cout << "---------------" << std::endl;

    Polar sumPolar = v1.toPolar() + v2.toPolar() - v3.toPolar() + v4.toPolar(); //v1.toPolar() + v2.toPolar() - v3.toPolar() +
    std::cout << sumPolar.toCartesian().toStr() << std::endl;
    std::cout << sumPolar.toStr() << std::endl;
}

[[maybe_unused]] void testVectorMethod() {
    Vector v1(1, 1.01);
    Vector v2(-1, 1);
    Vector v3(4, 3);
    Vector v4(21, 5);

    v1 += v2;

    std::cout << v1;

}

[[maybe_unused]] void testPolar() {
    Polar p1(1, PI_3);
    Polar p2(4, PI2);
    Polar p3(2, PI_2);
    Polar p4(9, PI);

    Vector v1 = p1.toCartesian();
    Vector v2 = p2.toCartesian();
    Vector v3 = p3.toCartesian();
    Vector v4 = p4.toCartesian();

    std::cout << std::setw(20) << std::fixed << std::left << p1 << v1 << std::endl;
    std::cout << std::setw(20) << std::fixed << std::left << p2 << v2 << std::endl;
    std::cout << std::setw(20) << std::fixed << std::left << p3 << v3 << std::endl;
    std::cout << std::setw(20) << std::fixed << std::left << p4 << v4 << std::endl;

    std::cout << "---------------" << std::endl;

    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;
    std::cout << v4 << std::endl;

    std::cout << "---------------" << std::endl;

    std::cout << v3.getX() << std::endl;

    std::cout << "---------------" << std::endl;

    Polar sumPolar = p1 + 5*p2 - p3 + p4;
    std::cout << std::setw(20) << std::fixed << std::left << sumPolar.toCartesian() << sumPolar << std::endl;

    Vector sumVector = v1 + 5*v2 - v3 + v4;
    std::cout << std::setw(20) << std::fixed << std::left << sumVector.toPolar() << sumVector << std::endl;

    std::cout << "---------------" << std::endl;
}

int main() {
    testPolar();
    return 0;
}
