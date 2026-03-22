#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1700(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1700] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1700] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+((10)*(expr[2]))));
}
}

void compute_coeffs_scalar_1701(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1701] = ((0.437500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.57142857142857142857142857143));
} else {
coeffs[1701] = ((0.437500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((15)*(expr[1]))+(((-10)*(expr[2]))+((-9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1702(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1702] = ((0.875000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((4.57142857142857142857142857143)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((8)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((2)*(pow(a,3)))+((a)*((r)*(((11)*(M))+((2)*(r)))))))+((-1.71428571428571428571428571429)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))))));
} else {
coeffs[1702] = ((0.875000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((2)*(pow(a,3)))+((a)*((r)*(((11)*(M))+((2)*(r))))))*(expr[1])))+(((20)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+((-6)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1703(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1703] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1703] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1704(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1704] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1704] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1705(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1705] = ((0.375000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((9)*(pow(a,3)))+(((-60)*((a)*((M)*(r))))+((9)*((a)*(pow(r,2)))))))+(((4.66666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.285714285714285714285714285714)*(((3)*(pow(a,3)))+((a)*((r)*(((-104)*(M))+((3)*(r)))))))+((-2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))))))));
} else {
coeffs[1705] = ((0.375000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((((9)*(pow(a,3)))+(((-60)*((a)*((M)*(r))))+((9)*((a)*(pow(r,2))))))*(expr[1]))+(((-5)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[2])))+(((((3)*(pow(a,3)))+((a)*((r)*(((-104)*(M))+((3)*(r))))))*(expr[3]))+((21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1706(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1706] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1706] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((35)*(expr[2]))+(((21)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1707(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1707] = ((0.125000000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-28)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((6)*(((7)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((7)*(r)))))))+(((0.666666666666666666666666666667)*(((11)*(pow(a,3)))+((a)*((r)*(((20)*(M))+((11)*(r)))))))+((-1.33333333333333333333333333333)*((a)*(((16)*(pow(a,2)))+((r)*(((-47)*(M))+((16)*(r))))))))))));
} else {
coeffs[1707] = ((0.125000000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((11)*(pow(a,3)))+((a)*((r)*(((20)*(M))+((11)*(r))))))*(expr[1]))+(((-70)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+(((21)*((((7)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((7)*(r))))))*(expr[3])))+((-6)*((a)*((((16)*(pow(a,2)))+((r)*(((-47)*(M))+((16)*(r)))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1708(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1708] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1708] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((3)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((34)*(expr[0]))+(((-720)*(expr[1]))+(((3220)*(expr[2]))+(((-5376)*(expr[3]))+((2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1709(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1709] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1709] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((34)*(expr[0]))+(((-720)*(expr[1]))+(((3220)*(expr[2]))+(((-5376)*(expr[3]))+((2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1710(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1710] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-136)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-131)*(pow(a,3)))+((a)*((((1702)*(M))+((-131)*(r)))*(r)))))+(((270)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((56)*(((5)*(pow(a,3)))+((a)*((r)*(((-56)*(M))+((5)*(r)))))))+(((-12)*(((13)*(pow(a,3)))+((a)*((r)*(((-282)*(M))+((13)*(r)))))))+((-13.3333333333333333333333333333)*(((23)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((23)*(r)))))))))))));
} else {
coeffs[1710] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-34)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((720)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((5376)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-2970)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-68)*((a)*((M)*((r)*(expr[0])))))+(((((-131)*(pow(a,3)))+((a)*((((1702)*(M))+((-131)*(r)))*(r))))*(expr[1]))+(((140)*((((5)*(pow(a,3)))+((a)*((r)*(((-56)*(M))+((5)*(r))))))*(expr[2])))+(((-42)*((((13)*(pow(a,3)))+((a)*((r)*(((-282)*(M))+((13)*(r))))))*(expr[3])))+(((-60)*((((23)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((23)*(r))))))*(expr[4])))+((1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1711(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1711] = ((0.328125000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.04761904761904761904761904762));
} else {
coeffs[1711] = ((0.328125000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-5)*(expr[1]))+(((5)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1712(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1712] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.285714285714285714285714285714)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((3.33333333333333333333333333333)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r)))))+((0.285714285714285714285714285714)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))));
} else {
coeffs[1712] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((-15)*((a)*((M)*((r)*(expr[2])))))+((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_1713(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1713] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1713] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((5)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1714(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1714] = ((0.656250000000000000000000000000)*((1.73205080756887729352744634151)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1714] = ((0.656250000000000000000000000000)*((1.73205080756887729352744634151)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((5)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1715(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1715] = ((1.31250000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-6)*(pow(a,3)))+((3)*((a)*((((11)*(M))+((-2)*(r)))*(r))))))+(((-0.444444444444444444444444444444)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((2)*(pow(a,2)))+((r)*(((5)*(M))+((2)*(r))))))))))));
} else {
coeffs[1715] = ((1.31250000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((2)*(pow(a,2)))+((r)*(((5)*(M))+((2)*(r)))))*(expr[1]))))+(((5)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((((-6)*(pow(a,3)))+((3)*((a)*((((11)*(M))+((-2)*(r)))*(r)))))*(expr[3]))+((-2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1716(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1716] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1716] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((28)*(expr[1]))+(((-70)*(expr[2]))+(((28)*(expr[3]))+((15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1717(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1717] = ((0.0937500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((90)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((8)*(pow(a,3)))+((4)*((a)*((r)*(((-25)*(M))+((2)*(r))))))))+(((-8)*(((2)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((2)*(r)))))))+((0.222222222222222222222222222222)*(((48)*(pow(a,3)))+((3)*((a)*((r)*(((-47)*(M))+((16)*(r))))))))))));
} else {
coeffs[1717] = ((0.0937500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((((8)*(pow(a,3)))+((4)*((a)*((r)*(((-25)*(M))+((2)*(r)))))))*(expr[1]))+(((210)*((a)*((M)*((r)*(expr[2])))))+(((-28)*((((2)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((2)*(r))))))*(expr[3])))+((((48)*(pow(a,3)))+((3)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1718(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1718] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1718] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-20)*(expr[1]))+(((-70)*(expr[2]))+(((252)*(expr[3]))+((-165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1719(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1719] = ((0.0234375000000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1719] = ((0.0234375000000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-20)*(expr[1]))+(((-70)*(expr[2]))+(((252)*(expr[3]))+((-165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1720(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1720] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*(r))))+(((-10)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-28)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-3.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-41)*(M))+((4)*(r)))))))+(((4)*(((17)*(pow(a,3)))+((a)*((r)*(((-88)*(M))+((17)*(r)))))))+((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((17)*(r)))))))))))));
} else {
coeffs[1720] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-252)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((165)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-9)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((17)*(r))))))*(expr[1]))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((14)*((((17)*(pow(a,3)))+((a)*((r)*(((-88)*(M))+((17)*(r))))))*(expr[3])))+(((-15)*((((4)*(pow(a,3)))+((a)*((r)*(((-41)*(M))+((4)*(r))))))*(expr[4])))+((-55)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1721(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1721] = ((0.984375000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[1721] = ((0.984375000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-4)*(expr[1]))+(((10)*(expr[2]))+(((-4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1722(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1722] = ((0.984375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[1722] = ((0.984375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-4)*(expr[1]))+(((10)*(expr[2]))+(((-4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1723(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1723] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.03174603174603174603174603175)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((0.888888888888888888888888888889)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+((-1.14285714285714285714285714286)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))))))));
} else {
coeffs[1723] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[1])))+(((-4)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((-4)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((4)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1724(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1724] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1724] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1725(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1725] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1725] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1726(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1726] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((12.1090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2)*((pow(a,3))+((a)*((r)*(((14)*(M))+(r))))))+((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[1726] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((-3)*(((pow(a,3))+((a)*((r)*(((14)*(M))+(r)))))*(expr[1])))+(((28)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((12)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[4])))+((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1727(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1727] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1727] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((51)*(expr[1]))+(((-210)*(expr[2]))+(((238)*(expr[3]))+(((-45)*(expr[4]))+((-33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1728(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1728] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1728] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((51)*(expr[1]))+(((-210)*(expr[2]))+(((238)*(expr[3]))+(((-45)*(expr[4]))+((-33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1729(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1729] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((16)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r)))))))+(((8)*(((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r)))))))+(((4)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+((-8)*(((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r)))))))))))));
} else {
coeffs[1729] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-51)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-238)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-6)*((((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r))))))*(expr[1])))+(((40)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[2])))+(((28)*((((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r))))))*(expr[3])))+(((-36)*((((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r))))))*(expr[4])))+((22)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1730(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1730] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1730] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((-5)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1731(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1731] = ((0.984375000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[1731] = ((0.984375000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((7)*(expr[1]))+(((-15)*(expr[2]))+(((5)*(expr[3]))+((4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1732(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1732] = ((1.96875000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[1732] = ((1.96875000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((7)*(expr[1]))+(((-15)*(expr[2]))+(((5)*(expr[3]))+((4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1733(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1733] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.01587301587301587301587301587)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-0.400000000000000000000000000000)*((a)*(((4)*(pow(a,2)))+((r)*(((37)*(M))+((4)*(r)))))))+((0.285714285714285714285714285714)*(((16)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((16)*(r))))))))))));
} else {
coeffs[1733] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((21)*((a)*((M)*((r)*(expr[1])))))+(((-1)*((a)*((((4)*(pow(a,2)))+((r)*(((37)*(M))+((4)*(r)))))*(expr[2]))))+(((((16)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((16)*(r))))))*(expr[3]))+((-12)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1734(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1734] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1734] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1735(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1735] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1735] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1736(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1736] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-8)*(pow(a,3)))+((a)*((((259)*(M))+((-8)*(r)))*(r)))))+(((24)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-5.45454545454545454545454545455)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-5.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r))))))))))))));
} else {
coeffs[1736] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r))))))*(expr[1])))+(((-14)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+(((84)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+(((((-8)*(pow(a,3)))+((a)*((((259)*(M))+((-8)*(r)))*(r))))*(expr[4]))+((-30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1737(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1737] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1737] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-54)*(expr[1]))+(((210)*(expr[2]))+(((-224)*(expr[3]))+(((-45)*(expr[4]))+((110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1738(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1738] = ((0.0703125000000000000000000000000)*((6.74536878161602073277515280575)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1738] = ((0.0703125000000000000000000000000)*((6.74536878161602073277515280575)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-54)*(expr[1]))+(((210)*(expr[2]))+(((-224)*(expr[3]))+(((-45)*(expr[4]))+((110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1739(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1739] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*(r))))+(((-10)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((-12)*(((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r)))))))+(((4)*(((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((11)*(pow(a,2)))+((r)*(((140)*(M))+((11)*(r)))))))+((0.222222222222222222222222222222)*(((564)*(pow(a,3)))+((3)*((a)*((r)*(((-421)*(M))+((188)*(r))))))))))))));
} else {
coeffs[1739] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((54)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((224)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-110)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((9)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((11)*(pow(a,2)))+((r)*(((140)*(M))+((11)*(r)))))*(expr[1]))))+(((10)*((((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r))))))*(expr[2])))+(((-42)*((((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r))))))*(expr[3])))+(((((564)*(pow(a,3)))+((3)*((a)*((r)*(((-421)*(M))+((188)*(r)))))))*(expr[4]))+((-55)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1740(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1740] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1740] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1741(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1741] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1741] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((60)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1742(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1742] = ((0.562500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.55555555555555555555555555556));
} else {
coeffs[1742] = ((0.562500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-13)*(expr[1]))+(((20)*(expr[2]))+(((35)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1743(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1743] = ((0.562500000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.55555555555555555555555555556));
} else {
coeffs[1743] = ((0.562500000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-13)*(expr[1]))+(((20)*(expr[2]))+(((35)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1744(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1744] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((3.55555555555555555555555555556)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((21.7777777777777777777777777778)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r)))))))+(((-4)*(((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r)))))))+((0.400000000000000000000000000000)*(((74)*(pow(a,3)))+((2)*((a)*((r)*(((-54)*(M))+((37)*(r))))))))))))));
} else {
coeffs[1744] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((13)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r))))))*(expr[1])))+(((((74)*(pow(a,3)))+((2)*((a)*((r)*(((-54)*(M))+((37)*(r)))))))*(expr[2]))+(((-14)*((((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r))))))*(expr[3])))+((98)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1745(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1745] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1745] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1746(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1746] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1746] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1747(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1747] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((52)*((a)*((M)*(r))))+(((5.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((19.0909090909090909090909090909)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*(((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r)))))))+((-1.33333333333333333333333333333)*(((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r))))))))))));
} else {
coeffs[1747] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-42)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((84)*((a)*((M)*((r)*(expr[1])))))+(((14)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[2])))+(((7)*((((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r))))))*(expr[3])))+(((-6)*((((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r))))))*(expr[4])))+((105)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1748(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1748] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1748] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-21)*(expr[1]))+(((210)*(expr[2]))+(((-2674)*(expr[3]))+(((5805)*(expr[4]))+((-3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1749(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1749] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1749] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-21)*(expr[1]))+(((210)*(expr[2]))+(((-2674)*(expr[3]))+(((5805)*(expr[4]))+((-3465)*(expr[5]))))))));
}
}

}
