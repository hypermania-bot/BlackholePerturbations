#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1850(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1850] = ((0.601562500000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[1850] = ((0.601562500000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1851(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1851] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.66233766233766233766233766234)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.400000000000000000000000000000)*(((-64)*(pow(a,3)))+((2)*((a)*((((149)*(M))+((-32)*(r)))*(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r)))))))+(((8.18181818181818181818181818182)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((1.71428571428571428571428571429)*(((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((128)*(pow(a,2)))+((r)*(((-439)*(M))+((128)*(r))))))))))))));
} else {
coeffs[1851] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r))))))*(expr[1]))+(((((-64)*(pow(a,3)))+((2)*((a)*((((149)*(M))+((-32)*(r)))*(r)))))*(expr[2]))+(((6)*((((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r))))))*(expr[3])))+(((-3)*((a)*((((128)*(pow(a,2)))+((r)*(((-439)*(M))+((128)*(r)))))*(expr[4]))))+((45)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1852(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1852] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1852] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1853(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1853] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1853] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1854(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1854] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-3954)*(pow(a,3)))+((3)*((a)*((((1781)*(M))+((-1318)*(r)))*(r))))))+(((-228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((35)*(M))+((17)*(r)))))))+(((12)*(((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r)))))))+(((-2)*(((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r)))))))+((1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r)))))))))))))));
} else {
coeffs[1854] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((35)*(M))+((17)*(r))))))*(expr[1]))+(((-5)*((((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r))))))*(expr[2])))+(((42)*((((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r))))))*(expr[3])))+(((((-3954)*(pow(a,3)))+((3)*((a)*((((1781)*(M))+((-1318)*(r)))*(r)))))*(expr[4]))+(((9)*((((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r))))))*(expr[5])))+((-1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1855(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1855] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1855] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-35)*(expr[2]))+((42)*(expr[3])))));
}
}

void compute_coeffs_scalar_1856(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1856] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1856] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((35)*(expr[2]))+(((21)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1857(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1857] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1857] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1858(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1858] = ((0.687500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.90909090909090909090909090909));
} else {
coeffs[1858] = ((0.687500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((35)*(expr[2]))+(((-210)*(expr[3]))+(((396)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1859(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1859] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.90909090909090909090909090909)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-16.3636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r)))))))+(((-12)*(((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r)))))))+(((0.800000000000000000000000000000)*(((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r)))))))+((0.222222222222222222222222222222)*(((762)*(pow(a,3)))+((6)*((a)*((r)*(((-386)*(M))+((127)*(r)))))))))))))));
} else {
coeffs[1859] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r))))))*(expr[1])))+(((2)*((((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r))))))*(expr[2])))+(((-42)*((((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r))))))*(expr[3])))+(((((762)*(pow(a,3)))+((6)*((a)*((r)*(((-386)*(M))+((127)*(r)))))))*(expr[4]))+((-90)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1860(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1860] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1860] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((846)*(expr[1]))+(((-7310)*(expr[2]))+(((21504)*(expr[3]))+(((-25785)*(expr[4]))+((10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1861(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1861] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1861] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((846)*(expr[1]))+(((-7310)*(expr[2]))+(((21504)*(expr[3]))+(((-25785)*(expr[4]))+((10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1862(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1862] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*(r))))+(((1142.30769230769230769230769231)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*(((11)*(pow(a,2)))+((r)*(((1670)*(M))+((11)*(r)))))))+(((-12)*(((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r)))))))+(((0.400000000000000000000000000000)*(((565)*(pow(a,3)))+((5)*((a)*((r)*(((2698)*(M))+((113)*(r))))))))+(((-8.18181818181818181818181818182)*(((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r)))))))+((1.33333333333333333333333333333)*(((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))))))))));
} else {
coeffs[1862] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-846)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((7310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-21504)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((25785)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-10890)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((34)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((11)*(pow(a,2)))+((r)*(((1670)*(M))+((11)*(r)))))*(expr[1]))))+(((((565)*(pow(a,3)))+((5)*((a)*((r)*(((2698)*(M))+((113)*(r)))))))*(expr[2]))+(((-42)*((((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r))))))*(expr[3])))+(((6)*((((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))*(expr[4])))+(((-45)*((((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r))))))*(expr[5])))+((7425)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1863(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1863] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1863] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((28)*(expr[1]))+(((-70)*(expr[2]))+(((28)*(expr[3]))+((15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1864(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1864] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1864] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1865(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1865] = ((0.128906250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.75757575757575757575757575758));
} else {
coeffs[1865] = ((0.128906250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-83)*(expr[1]))+(((350)*(expr[2]))+(((-350)*(expr[3]))+(((-141)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1866(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1866] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((7.75757575757575757575757575758)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*(r))))+(((24.5454545454545454545454545455)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-31.3333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r)))))))+(((0.666666666666666666666666666667)*(((20)*(pow(a,3)))+((a)*((r)*(((209)*(M))+((20)*(r)))))))+(((-2.40000000000000000000000000000)*(((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r)))))))+((4)*(((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))))))))));
} else {
coeffs[1866] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((83)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((141)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((((20)*(pow(a,3)))+((a)*((r)*(((209)*(M))+((20)*(r))))))*(expr[1]))+(((-6)*((((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r))))))*(expr[2])))+(((14)*((((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))*(expr[3])))+(((-141)*((((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r))))))*(expr[4])))+((135)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1867(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1867] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1867] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-179)*(expr[1]))+(((1310)*(expr[2]))+(((-3654)*(expr[3]))+(((4335)*(expr[4]))+((-1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1868(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1868] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1868] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-179)*(expr[1]))+(((1310)*(expr[2]))+(((-3654)*(expr[3]))+(((4335)*(expr[4]))+((-1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1869(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1869] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-19)*(pow(a,3)))+((a)*((((575)*(M))+((-19)*(r)))*(r)))))+(((-126.923076923076923076923076923)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*(((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r)))))))+(((2)*(((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r)))))))+(((-4)*(((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r)))))))+((0.909090909090909090909090909091)*(((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))))))))));
} else {
coeffs[1869] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((179)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((3654)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-4335)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1815)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-9)*((a)*((M)*((r)*(expr[0])))))+(((((-19)*(pow(a,3)))+((a)*((((575)*(M))+((-19)*(r)))*(r))))*(expr[1]))+(((5)*((((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r))))))*(expr[2])))+(((-14)*((((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r))))))*(expr[3])))+(((9)*((((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r))))))*(expr[4])))+(((5)*((((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))*(expr[5])))+((-825)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1870(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1870] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1870] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1871(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1871] = ((0.515625000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.87878787878787878787878787879));
} else {
coeffs[1871] = ((0.515625000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((39)*(expr[1]))+(((-140)*(expr[2]))+(((154)*(expr[3]))+(((-24)*(expr[4]))+((-25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1872(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1872] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((3.87878787878787878787878787879)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*(r))))+(((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-142)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((-8)*(((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r)))))))+(((-3.63636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+((0.888888888888888888888888888889)*(((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))))))))));
} else {
coeffs[1872] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-39)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-154)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((24)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((-4)*(((pow(a,3))+((a)*((r)*(((-142)*(M))+(r)))))*(expr[2])))+(((-28)*((((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r))))))*(expr[3])))+(((4)*((((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))*(expr[4])))+((-20)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1873(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1873] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1873] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-220)*(expr[2]))+(((896)*(expr[3]))+(((-1170)*(expr[4]))+((484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1874(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1874] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1874] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-220)*(expr[2]))+(((896)*(expr[3]))+(((-1170)*(expr[4]))+((484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1875(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1875] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-758)*(pow(a,3)))+((2)*((a)*((((3098)*(M))+((-379)*(r)))*(r))))))+(((25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.181818181818181818181818181818)*(((5)*(pow(a,3)))+((a)*((r)*(((-1946)*(M))+((5)*(r)))))))+(((0.666666666666666666666666666667)*(((41)*(pow(a,3)))+((a)*((r)*(((-130)*(M))+((41)*(r)))))))+(((4)*(((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r)))))))+((-2)*(((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))))))))));
} else {
coeffs[1875] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-896)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((((41)*(pow(a,3)))+((a)*((r)*(((-130)*(M))+((41)*(r))))))*(expr[1]))+(((-5)*((((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))*(expr[2])))+(((14)*((((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r))))))*(expr[3])))+(((((-758)*(pow(a,3)))+((2)*((a)*((((3098)*(M))+((-379)*(r)))*(r)))))*(expr[4]))+(((((5)*(pow(a,3)))+((a)*((r)*(((-1946)*(M))+((5)*(r))))))*(expr[5]))+((165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1876(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1876] = ((0.644531250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1876] = ((0.644531250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((14)*(expr[2]))+(((-14)*(expr[3]))+(((3)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1877(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1877] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.181818181818181818181818181818)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.73333333333333333333333333333)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((30)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-8)*(pow(a,3)))+((a)*(((M)+((-8)*(r)))*(r)))))+(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r)))))+(((0.400000000000000000000000000000)*(((8)*(pow(a,3)))+(((-86)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2)))))))+((0.181818181818181818181818181818)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))))))));
} else {
coeffs[1877] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((5)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((((8)*(pow(a,3)))+(((-86)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2))))))*(expr[2]))+(((70)*((a)*((M)*((r)*(expr[3])))))+(((((-8)*(pow(a,3)))+((a)*(((M)+((-8)*(r)))*(r))))*(expr[4]))+((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1878(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1878] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1878] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-14)*(expr[3]))+(((27)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1879(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1879] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1879] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-14)*(expr[3]))+(((27)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1880(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1880] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*(r))))+(((-0.909090909090909090909090909091)*((pow(a,3))+((a)*((r)*(((-13)*(M))+(r))))))+(((-0.461538461538461538461538461538)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((43)*(M))+(r))))))+(((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r)))))))+(((0.400000000000000000000000000000)*(((17)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((17)*(r)))))))+((0.222222222222222222222222222222)*(((34)*(pow(a,3)))+((a)*((r)*(((-203)*(M))+((34)*(r))))))))))))));
} else {
coeffs[1880] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((5)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((43)*(M))+(r))))*(expr[1]))))+(((((17)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((17)*(r))))))*(expr[2]))+(((-14)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((34)*(pow(a,3)))+((a)*((r)*(((-203)*(M))+((34)*(r))))))*(expr[4]))+(((-5)*(((pow(a,3))+((a)*((r)*(((-13)*(M))+(r)))))*(expr[5])))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1881(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1881] = ((1.57104492187500000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.27303807303807303807303807304));
} else {
coeffs[1881] = ((1.57104492187500000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-2)*(expr[1]))+(((17)*(expr[2]))+(((-28)*(expr[3]))+(((17)*(expr[4]))+(((-2)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1882(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1882] = ((1.57104492187500000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.27303807303807303807303807304));
} else {
coeffs[1882] = ((1.57104492187500000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-2)*(expr[1]))+(((17)*(expr[2]))+(((-28)*(expr[3]))+(((17)*(expr[4]))+(((-2)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1883(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1883] = ((3.14208984375000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.27303807303807303807303807304)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((2.28571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-2.18181818181818181818181818182)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-2.40000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-21)*(M))+((2)*(r)))))))+(((0.153846153846153846153846153846)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r))))))))+((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+((2)*((a)*((r)*(((43)*(M))+((4)*(r))))))))))))))));
} else {
coeffs[1883] = ((3.14208984375000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((-6)*((((2)*(pow(a,3)))+((a)*((r)*(((-21)*(M))+((2)*(r))))))*(expr[2])))+(((8)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[3])))+(((((8)*(pow(a,3)))+((2)*((a)*((r)*(((43)*(M))+((4)*(r)))))))*(expr[4]))+(((-12)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[5])))+((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r)))))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_1884(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1884] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1884] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1885(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1885] = ((1.04736328125000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.954778554778554778554778554779));
} else {
coeffs[1885] = ((1.04736328125000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-61)*(expr[2]))+(((112)*(expr[3]))+(((-75)*(expr[4]))+(((4)*(expr[5]))+((9)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1886(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1886] = ((2.09472656250000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.954778554778554778554778554779));
} else {
coeffs[1886] = ((2.09472656250000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-61)*(expr[2]))+(((112)*(expr[3]))+(((-75)*(expr[4]))+(((4)*(expr[5]))+((9)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1887(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1887] = ((4.18945312500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((0.954778554778554778554778554779)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((2)*(((2)*(pow(a,3)))+((a)*((r)*(((-65)*(M))+((2)*(r)))))))+(((-2.30769230769230769230769230769)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((134)*(M))+((3)*(r)))))))+(((0.181818181818181818181818181818)*(((86)*(pow(a,3)))+((2)*((a)*((r)*(((-76)*(M))+((43)*(r))))))))+((-0.222222222222222222222222222222)*((a)*(((76)*(pow(a,2)))+((r)*(((223)*(M))+((76)*(r)))))))))))))));
} else {
coeffs[1887] = ((4.18945312500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((61)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-112)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-5)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[1])))+(((5)*((((2)*(pow(a,3)))+((a)*((r)*(((-65)*(M))+((2)*(r))))))*(expr[2])))+(((4)*((((3)*(pow(a,3)))+((a)*((r)*(((134)*(M))+((3)*(r))))))*(expr[3])))+(((-1)*((a)*((((76)*(pow(a,2)))+((r)*(((223)*(M))+((76)*(r)))))*(expr[4]))))+(((((86)*(pow(a,3)))+((2)*((a)*((r)*(((-76)*(M))+((43)*(r)))))))*(expr[5]))+((-15)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1888(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1888] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1888] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((51)*(expr[1]))+(((-210)*(expr[2]))+(((238)*(expr[3]))+(((-45)*(expr[4]))+((-33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1889(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1889] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1889] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1890(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1890] = ((0.0952148437500000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-21.0051282051282051282051282051));
} else {
coeffs[1890] = ((0.0952148437500000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-378)*(expr[1]))+(((2353)*(expr[2]))+(((-4844)*(expr[3]))+(((3057)*(expr[4]))+(((902)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1891(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1891] = ((0.0952148437500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-21.0051282051282051282051282051));
} else {
coeffs[1891] = ((0.0952148437500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-378)*(expr[1]))+(((2353)*(expr[2]))+(((-4844)*(expr[3]))+(((3057)*(expr[4]))+(((902)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1892(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1892] = ((0.190429687500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((21.0051282051282051282051282051)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((223.384615384615384615384615385)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-5.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((179)*(M))+((5)*(r)))))))+(((-16)*(((91)*(pow(a,3)))+((a)*((r)*(((-223)*(M))+((91)*(r)))))))+(((0.400000000000000000000000000000)*(((568)*(pow(a,3)))+((4)*((a)*((r)*(((2069)*(M))+((142)*(r))))))))+(((-4.57142857142857142857142857143)*(((201)*(pow(a,3)))+((a)*((r)*(((809)*(M))+((201)*(r)))))))+((0.222222222222222222222222222222)*(((7792)*(pow(a,3)))+((4)*((a)*((r)*(((-839)*(M))+((1948)*(r))))))))))))))));
} else {
coeffs[1892] = ((0.190429687500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-2353)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((4844)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3057)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-902)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-8)*((((5)*(pow(a,3)))+((a)*((r)*(((179)*(M))+((5)*(r))))))*(expr[1])))+(((((568)*(pow(a,3)))+((4)*((a)*((r)*(((2069)*(M))+((142)*(r)))))))*(expr[2]))+(((-16)*((((201)*(pow(a,3)))+((a)*((r)*(((809)*(M))+((201)*(r))))))*(expr[3])))+(((((7792)*(pow(a,3)))+((4)*((a)*((r)*(((-839)*(M))+((1948)*(r)))))))*(expr[4]))+(((-88)*((((91)*(pow(a,3)))+((a)*((r)*(((-223)*(M))+((91)*(r))))))*(expr[5])))+((1452)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1893(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1893] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1893] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((20)*(expr[1]))+(((70)*(expr[2]))+(((-252)*(expr[3]))+((165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1894(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1894] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1894] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-54)*(expr[1]))+(((210)*(expr[2]))+(((-224)*(expr[3]))+(((-45)*(expr[4]))+((110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1895(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1895] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1895] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1896(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1896] = ((0.0571289062500000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-17.5042735042735042735042735043));
} else {
coeffs[1896] = ((0.0571289062500000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((66)*((M)*(pow(r,3))))+((-36)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((140)*(expr[1]))+(((-1125)*(expr[2]))+(((1904)*(expr[3]))+(((1565)*(expr[4]))+(((-5500)*(expr[5]))+((3025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1897(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1897] = ((0.114257812500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-17.5042735042735042735042735043));
} else {
coeffs[1897] = ((0.114257812500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((140)*(expr[1]))+(((-1125)*(expr[2]))+(((1904)*(expr[3]))+(((1565)*(expr[4]))+(((-5500)*(expr[5]))+((3025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1898(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1898] = ((0.228515625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((17.5042735042735042735042735043)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-54)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((6964)*(pow(a,3)))+(((-8216)*((a)*((M)*(r))))+((6964)*((a)*(pow(r,2)))))))+(((-465.384615384615384615384615385)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((0.666666666666666666666666666667)*(((66)*(pow(a,3)))+((6)*((a)*((r)*(((48)*(M))+((11)*(r))))))))+(((60)*(((49)*(pow(a,3)))+((a)*((r)*(((-148)*(M))+((49)*(r)))))))+(((-6)*(((86)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((86)*(r)))))))+((-1.11111111111111111111111111111)*(((3172)*(pow(a,3)))+((a)*((r)*(((-7283)*(M))+((3172)*(r)))))))))))))));
} else {
coeffs[1898] = ((0.228515625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1125)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-1904)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((5500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-3025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-27)*((a)*((M)*((r)*(expr[0])))))+(((((66)*(pow(a,3)))+((6)*((a)*((r)*(((48)*(M))+((11)*(r)))))))*(expr[1]))+(((-15)*((((86)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((86)*(r))))))*(expr[2])))+(((((6964)*(pow(a,3)))+(((-8216)*((a)*((M)*(r))))+((6964)*((a)*(pow(r,2))))))*(expr[3]))+(((-5)*((((3172)*(pow(a,3)))+((a)*((r)*(((-7283)*(M))+((3172)*(r))))))*(expr[4])))+(((330)*((((49)*(pow(a,3)))+((a)*((r)*(((-148)*(M))+((49)*(r))))))*(expr[5])))+((-3025)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1899(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1899] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1899] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((33)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-420)*(expr[1]))+(((1190)*(expr[2]))+(((-420)*(expr[3]))+((-495)*(expr[4])))))));
}
}

}
