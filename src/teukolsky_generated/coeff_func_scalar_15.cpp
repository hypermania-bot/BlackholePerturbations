#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_750(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[750] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[750] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_751(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[751] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+(((32)*(((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r)))))))+(((-9.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r)))))))+((-2.66666666666666666666666666667)*(((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r)))))))))))));
} else {
coeffs[751] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((-24)*((((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r))))))*(expr[2])))+(((112)*((((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r))))))*(expr[3])))+(((-12)*((((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r))))))*(expr[4])))+((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_752(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[752] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[752] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_753(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[753] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-168)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((6)*(((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r)))))))+(((42)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((-24)*(((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r)))))))+((4)*(((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r)))))))))))));
} else {
coeffs[753] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((9)*((((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r))))))*(expr[1])))+(((-420)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((14)*((((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r))))))*(expr[3])))+(((-108)*((((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r))))))*(expr[4])))+((231)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_754(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[754] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[754] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_755(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[755] = ((0.492187500000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.03174603174603174603174603175));
} else {
coeffs[755] = ((0.492187500000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-1)*(expr[1]))+(((15)*(expr[2]))+(((-31)*(expr[3]))+((16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_756(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[756] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.0317460317460317460317460317460)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-7.20000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+((1.71428571428571428571428571429)*(((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r)))))))))))));
} else {
coeffs[756] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((31)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-16)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[1])))+(((-18)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((6)*((((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r))))))*(expr[3])))+((-24)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_757(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[757] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[757] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_758(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[758] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[758] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_759(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[759] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[759] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_760(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[760] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-10.9090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((52)*(M))+(r))))))+(((4.80000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r)))))))+(((-6.85714285714285714285714285714)*(((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r)))))))+((0.444444444444444444444444444444)*(((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r))))))))))))));
} else {
coeffs[760] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-150)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((52)*(M))+(r)))))*(expr[1])))+(((12)*((((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r))))))*(expr[2])))+(((-24)*((((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r))))))*(expr[3])))+(((2)*((((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r))))))*(expr[4])))+((-60)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_761(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[761] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[761] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((196)*(expr[3]))+(((-225)*(expr[4]))+((88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_762(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[762] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((-4)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((-24)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((8)*(((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r)))))))+(((-4)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+((4)*(((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r)))))))))))));
} else {
coeffs[762] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-88)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((20)*((((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r))))))*(expr[2])))+(((-84)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[3])))+(((18)*((((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r))))))*(expr[4])))+((-22)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_763(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[763] = ((1.96875000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.01587301587301587301587301587));
} else {
coeffs[763] = ((1.96875000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-2)*(expr[1]))+(((2)*(expr[3]))+((-1)*(expr[4]))))));
}
}

void compute_coeffs_scalar_764(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[764] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.984126984126984126984126984127)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-6)*(pow(a,3)))+((2)*((a)*((((14)*(M))+((-3)*(r)))*(r))))))+(((0.444444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((2.40000000000000000000000000000)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))))))));
} else {
coeffs[764] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((((-6)*(pow(a,3)))+((2)*((a)*((((14)*(M))+((-3)*(r)))*(r)))))*(expr[3]))+((2)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_765(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[765] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[765] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_766(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[766] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[766] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_767(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[767] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[767] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_768(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[768] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((-2)*((pow(a,3))+((a)*((r)*(((-34)*(M))+(r))))))+(((0.909090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+((0.285714285714285714285714285714)*(((6)*(pow(a,3)))+((2)*((a)*((r)*(((106)*(M))+((3)*(r))))))))))))));
} else {
coeffs[768] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((-3)*(((pow(a,3))+((a)*((r)*(((-34)*(M))+(r)))))*(expr[1])))+(((4)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[2])))+(((((6)*(pow(a,3)))+((2)*((a)*((r)*(((106)*(M))+((3)*(r)))))))*(expr[3]))+(((-12)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[4])))+((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_769(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[769] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[769] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((15)*(expr[1]))+(((-70)*(expr[3]))+(((90)*(expr[4]))+((-33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_770(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[770] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*(r))))+(((-40)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-40)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((10)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))+(((20)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))));
} else {
coeffs[770] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*((r)*(expr[0])))))+(((15)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((-100)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((70)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((-180)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))+((11)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_771(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[771] = ((1.12792968750000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.886580086580086580086580086580));
} else {
coeffs[771] = ((1.12792968750000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((2)*(expr[2]))+(((2)*(expr[3]))+(((-3)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_772(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[772] = ((2.25585937500000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.886580086580086580086580086580));
} else {
coeffs[772] = ((2.25585937500000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-2)*(expr[2]))+(((-2)*(expr[3]))+(((3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_773(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[773] = ((1.12792968750000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.886580086580086580086580086580));
} else {
coeffs[773] = ((1.12792968750000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-2)*(expr[2]))+(((-2)*(expr[3]))+(((3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_774(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[774] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.18181818181818181818181818182)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.29523809523809523809523809524)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-8)*(pow(a,3)))+((2)*((a)*((((23)*(M))+((-4)*(r)))*(r))))))+(((0.363636363636363636363636363636)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((13)*(M))+(r))))))+(((-1.60000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))+((1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))))))))));
} else {
coeffs[774] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((13)*(M))+(r)))))*(expr[1])))+(((-4)*((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2])))+(((4)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((-8)*(pow(a,3)))+((2)*((a)*((((23)*(M))+((-4)*(r)))*(r)))))*(expr[4]))+((2)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_775(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[775] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[775] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_776(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[776] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[776] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_777(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[777] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[777] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_778(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[778] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((180)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-52)*(M))+(r))))))+(((-0.923076923076923076923076923077)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((a)*(((2)*(pow(a,2)))+((r)*(((-79)*(M))+((2)*(r)))))))+(((1.81818181818181818181818181818)*(((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r)))))))+((-2.22222222222222222222222222222)*(((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r))))))))))))));
} else {
coeffs[778] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((a)*((((2)*(pow(a,2)))+((r)*(((-79)*(M))+((2)*(r)))))*(expr[1]))))+(((10)*(((pow(a,3))+((a)*((r)*(((-52)*(M))+(r)))))*(expr[2])))+(((700)*((a)*((M)*((r)*(expr[3])))))+(((-10)*((((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r))))))*(expr[4])))+(((10)*((((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r))))))*(expr[5])))+((-6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_779(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[779] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[779] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_780(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[780] = ((0.902343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.21645021645021645021645021645));
} else {
coeffs[780] = ((0.902343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((10)*(expr[2]))+(((-58)*(expr[3]))+(((69)*(expr[4]))+((-25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_781(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[781] = ((0.902343750000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.21645021645021645021645021645));
} else {
coeffs[781] = ((0.902343750000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((-10)*(expr[2]))+(((58)*(expr[3]))+(((-69)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_782(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[782] = ((0.451171875000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.21645021645021645021645021645));
} else {
coeffs[782] = ((0.451171875000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((-10)*(expr[2]))+(((58)*(expr[3]))+(((-69)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_783(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[783] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.216450216450216450216450216450)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((-7.27272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((6.40000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-4.57142857142857142857142857143)*(((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r)))))))+((1.77777777777777777777777777778)*(((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))))))))));
} else {
coeffs[783] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((58)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((-8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((16)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[2])))+(((-16)*((((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r))))))*(expr[3])))+(((8)*((((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))*(expr[4])))+((-40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_784(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[784] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[784] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_785(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[785] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[785] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-90)*(expr[1]))+(((500)*(expr[2]))+(((-980)*(expr[3]))+(((810)*(expr[4]))+((-242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_786(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[786] = ((0.00585937500000000000000000000000)*((31.6385840391127491431062915848)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[786] = ((0.00585937500000000000000000000000)*((31.6385840391127491431062915848)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-90)*(expr[1]))+(((500)*(expr[2]))+(((-980)*(expr[3]))+(((810)*(expr[4]))+((-242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_787(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[787] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*(r))))+(((25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-3.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((142)*(M))+(r))))))+(((10)*((pow(a,3))+((a)*((r)*(((158)*(M))+(r))))))+(((-20)*(((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r)))))))+(((2.22222222222222222222222222222)*(((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r)))))))+((-0.181818181818181818181818181818)*((a)*(((505)*(pow(a,2)))+((r)*(((926)*(M))+((505)*(r))))))))))))));
} else {
coeffs[787] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-980)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((810)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-242)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*((r)*(expr[0])))))+(((-5)*(((pow(a,3))+((a)*((r)*(((142)*(M))+(r)))))*(expr[1])))+(((25)*(((pow(a,3))+((a)*((r)*(((158)*(M))+(r)))))*(expr[2])))+(((-70)*((((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))*(expr[3])))+(((10)*((((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r))))))*(expr[4])))+(((-1)*((a)*((((505)*(pow(a,2)))+((r)*(((926)*(M))+((505)*(r)))))*(expr[5]))))+((165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_788(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[788] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[788] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((10)*(expr[2]))+(((-28)*(expr[3]))+((15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_789(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[789] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[789] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_790(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[790] = ((0.225585937500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(4.43290043290043290043290043290));
} else {
coeffs[790] = ((0.225585937500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((29)*(expr[1]))+(((-190)*(expr[2]))+(((514)*(expr[3]))+(((-579)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_791(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[791] = ((0.451171875000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.43290043290043290043290043290));
} else {
coeffs[791] = ((0.451171875000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-29)*(expr[1]))+(((190)*(expr[2]))+(((-514)*(expr[3]))+(((579)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_792(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[792] = ((0.225585937500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.43290043290043290043290043290));
} else {
coeffs[792] = ((0.225585937500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-29)*(expr[1]))+(((190)*(expr[2]))+(((-514)*(expr[3]))+(((579)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_793(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[793] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-2.43290043290043290043290043290)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((596)*(pow(a,3)))+(((-4276)*((a)*((M)*(r))))+((596)*((a)*(pow(r,2)))))))+(((49.0909090909090909090909090909)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((1.33333333333333333333333333333)*(((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r)))))))+(((-1.60000000000000000000000000000)*(((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r)))))))+((-1.33333333333333333333333333333)*((a)*(((116)*(pow(a,2)))+((r)*(((-811)*(M))+((116)*(r))))))))))))));
} else {
coeffs[793] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-29)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-514)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((579)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r))))))*(expr[1])))+(((-4)*((((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r))))))*(expr[2])))+(((((596)*(pow(a,3)))+(((-4276)*((a)*((M)*(r))))+((596)*((a)*(pow(r,2))))))*(expr[3]))+(((-6)*((a)*((((116)*(pow(a,2)))+((r)*(((-811)*(M))+((116)*(r)))))*(expr[4]))))+((270)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_794(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[794] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[794] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((19)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_795(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[795] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[795] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((47)*(expr[1]))+(((-370)*(expr[2]))+(((966)*(expr[3]))+(((-1005)*(expr[4]))+((363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_796(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[796] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[796] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((47)*(expr[1]))+(((-370)*(expr[2]))+(((966)*(expr[3]))+(((-1005)*(expr[4]))+((363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_797(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[797] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((-50.7692307692307692307692307692)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((137)*(M))+((2)*(r))))))))+(((-12)*(((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r)))))))+(((8)*(((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r)))))))+(((-4)*(((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r)))))))+((0.181818181818181818181818181818)*(((940)*(pow(a,3)))+((2)*((a)*((r)*(((149)*(M))+((470)*(r))))))))))))))));
} else {
coeffs[797] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((47)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-370)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1005)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((363)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((137)*(M))+((2)*(r)))))))*(expr[1]))+(((-30)*((((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r))))))*(expr[2])))+(((28)*((((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r))))))*(expr[3])))+(((-18)*((((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r))))))*(expr[4])))+(((((940)*(pow(a,3)))+((2)*((a)*((r)*(((149)*(M))+((470)*(r)))))))*(expr[5]))+((-330)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_798(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[798] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[798] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_799(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[799] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[799] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

}
