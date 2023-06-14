#include <iostream>

#include "BigInteger.hpp"

using namespace std;

int main() {
    BigInteger a(-9999);
    BigInteger b("5");
    cout << b - a << '\n';
//    BigInteger c("-123456");
//    cin >> c;
//    b /= c;
//    a = a / c;
//    Rational r(5);
//    cout << r << '\n';
//    cout << a + b << '\n';
//    cout << b/3 << '\n';

/*
    int p = 10;
    Rational r1(2, 6);
    Rational r2(1, 3);
    Rational r3;

    Rational r4(-0);
    Rational r5(-10);
    BigInteger b1("2");
    BigInteger b2("3");
    Rational r6(b1,b2);

    cout << "r4 = " << '\t';
    cout << r4.toString() <<'\t';
    cout << r4.asDecimal(p) <<'\n';

    cout << "r5 = " << '\t';
    cout << r5.toString() <<'\t';
    cout << r5.asDecimal(p) <<'\n';

    cout << "r6 = " << '\t';
    cout << r6.toString() <<'\t';
    cout << r6.asDecimal(p) <<'\n';

    cout << "-r1 = " << '\t';
    cout << (-r1).toString() <<'\t';
    cout << (-r1).asDecimal(p) <<'\n';
    cout << "-r2 = " << '\t';
    cout << (-r2).toString() <<'\t';
    cout << (-r2).asDecimal(p) <<'\n';

    r3 = r1 + r2;
    cout << "r1 + r2 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';
    r3 = r2 + r1;
    cout << "r2 + r1 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';

    r3 = r1 - r2;
    cout << "r1 - r2 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';
    r3 = r2 - r1;
    cout << "r2 - r1 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';

    r3 = r1 * r2;
    cout << "r1 * r2 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';
    r3 = r2 * r1;
    cout << "r2 * r1 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';

    r3 = r1 / r2;
    cout << "r1 / r2 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';
    r3 = r2 / r1;
    cout << "r2 / r1 = " << '\t';
    cout << r3.toString() <<'\t';
    cout << r3.asDecimal(p) <<'\n';

    cout << "r1 == r2 = " << '\t';
    cout << (r1 == r2) <<'\n';
    cout << "r2 == r1 = " << '\t';
    cout << (r2 == r1) <<'\n';

    cout << "r1 != r2 = " << '\t';
    cout << (r1 != r2) <<'\n';
    cout << "r2 != r1 = " << '\t';
    cout << (r2 != r1) <<'\n';

    cout << "r1 < r2 = " << '\t';
    cout << (r1 < r2) <<'\n';
    cout << "r2 < r1 = " << '\t';
    cout << (r2 < r1) <<'\n';

    cout << "r1 > r2 = " << '\t';
    cout << (r1 > r2) <<'\n';
    cout << "r2 > r1 = " << '\t';
    cout << (r2 > r1) <<'\n';

    cout << "r1 <= r2 = " << '\t';
    cout << (r1 <= r2) <<'\n';
    cout << "r2 <= r1 = " << '\t';
    cout << (r2 <= r1) <<'\n';

    cout << "r1 >= r2 = " << '\t';
    cout << (r1 >= r2) <<'\n';
    cout << "r2 >= r1 = " << '\t';
    cout << (r2 >= r1) <<'\n';

    cout << "(double)r1 = " <<'\t';
    cout << (double)r1 << '\n';
    cout << "(double)r2 = " <<'\t';
    cout << (double)r2 << '\n';

//    for (BigInteger i = 0; i < 100; ++i) {
        Rational r7(0, -100);
        Rational r(1, -100);
//        r /= r7;
cout << r7.toString() << '\t' << r7.asDecimal(10) << '\n';
cout << r.toString() << '\t' << r.asDecimal(10) << '\n';
cout << (r7+r).toString() << '\t' << (r7+r).asDecimal(10) << '\n';
        cout << (-r < r7 + r) <<'\n'; // -1/100 < 0 + -1/100 = -1/100
        cout << ((Rational)0 > r7) <<'\n';
*/
//    }
//    cout << Rational("9999999", 123456).asDecimal(100) <<'\n';

//    r2 = r1;
//    cout << r2.toString() <<'\n';
//    (r2 *= r1);
//    r2.print();
//    cout << r2.toString() <<'\n';
//    cout << r2.asDecimal(3);
//    vector<Rational> v;
//    for (int i = 0; i < 100; ++i) {
//        v.push_back(Rational(1, 100));
//    }
//    Rational result = 0;
//    for (int i = 0; i < 99; ++i) {
//        result += v[i];
//    }
//    cout << result.toString() << '\t' << result.asDecimal(10) << '\n';
//
//    result += v[99];
//    cout << result.toString() << '\t' << result.asDecimal(10) << '\n';
//
//    BigInteger s1(9900);
//    BigInteger s2(100);
//    cout << s2 + s1 <<'\n';
    Rational r(2, 100);
    cout << r.asDecimal(4);

    return 0;
}
