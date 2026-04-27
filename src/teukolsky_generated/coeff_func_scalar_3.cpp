#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_150(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[150] = ((0.437500000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-24)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((4)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+((0.222222222222222222222222222222)*(((48)*(pow(a,3)))+((3)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))))))));
} else {
coeffs[150] = ((0.437500000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((10)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[2])))+(((-84)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[3])))+((((48)*(pow(a,3)))+((3)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_151(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[151] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[151] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_152(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[152] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[152] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_153(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[153] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[153] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_154(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[154] = ((0.0781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-636)*(pow(a,3)))+((3)*((a)*((((325)*(M))+((-212)*(r)))*(r))))))+(((54)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-28)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))+(((12)*(((11)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((11)*(r)))))))+((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((17)*(r)))))))))))));
} else {
coeffs[154] = ((0.0781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-588)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((297)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((17)*(r))))))*(expr[1]))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2])))+(((42)*((((11)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((11)*(r))))))*(expr[3])))+(((((-636)*(pow(a,3)))+((3)*((a)*((((325)*(M))+((-212)*(r)))*(r)))))*(expr[4]))+((297)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_155(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[155] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[155] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+((10)*(expr[2]))));
}
}

void compute_coeffs_scalar_156(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[156] = ((0.437500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(4.57142857142857142857142857143));
} else {
coeffs[156] = ((0.437500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((-15)*(expr[1]))+(((10)*(expr[2]))+((9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_157(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[157] = ((0.875000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-4.57142857142857142857142857143)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((8)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((2)*(pow(a,3)))+((a)*((r)*(((11)*(M))+((2)*(r)))))))+((-1.71428571428571428571428571429)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))))));
} else {
coeffs[157] = ((0.875000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((2)*(pow(a,3)))+((a)*((r)*(((11)*(M))+((2)*(r))))))*(expr[1])))+(((20)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+((-6)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_158(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[158] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[158] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_159(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[159] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[159] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_160(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[160] = ((0.0937500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[160] = ((0.0937500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((60)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_161(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[161] = ((0.375000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-9)*(pow(a,3)))+((3)*((a)*((((20)*(M))+((-3)*(r)))*(r))))))+(((0.285714285714285714285714285714)*(((-3)*(pow(a,3)))+((a)*((((104)*(M))+((-3)*(r)))*(r)))))+(((-4.66666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))))))));
} else {
coeffs[161] = ((0.375000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((-9)*(pow(a,3)))+((3)*((a)*((((20)*(M))+((-3)*(r)))*(r)))))*(expr[1]))+(((5)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[2])))+(((((-3)*(pow(a,3)))+((a)*((((104)*(M))+((-3)*(r)))*(r))))*(expr[3]))+((-21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_162(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[162] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[162] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-35)*(expr[2]))+(((-21)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_163(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[163] = ((0.125000000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-28)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((6)*(((7)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((7)*(r)))))))+(((0.666666666666666666666666666667)*(((11)*(pow(a,3)))+((a)*((r)*(((20)*(M))+((11)*(r)))))))+((-1.33333333333333333333333333333)*((a)*(((16)*(pow(a,2)))+((r)*(((-47)*(M))+((16)*(r))))))))))));
} else {
coeffs[163] = ((0.125000000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((11)*(pow(a,3)))+((a)*((r)*(((20)*(M))+((11)*(r))))))*(expr[1]))+(((-70)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+(((21)*((((7)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((7)*(r))))))*(expr[3])))+((-6)*((a)*((((16)*(pow(a,2)))+((r)*(((-47)*(M))+((16)*(r)))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_164(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[164] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[164] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((34)*(expr[0]))+(((-720)*(expr[1]))+(((3220)*(expr[2]))+(((-5376)*(expr[3]))+((2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_165(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[165] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[165] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((34)*(expr[0]))+(((-720)*(expr[1]))+(((3220)*(expr[2]))+(((-5376)*(expr[3]))+((2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_166(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[166] = ((0.00195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[166] = ((0.00195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-34)*(expr[0]))+(((720)*(expr[1]))+(((-3220)*(expr[2]))+(((5376)*(expr[3]))+((-2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_167(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[167] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((136)*((a)*((M)*(r))))+(((-270)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-56)*(((5)*(pow(a,3)))+((a)*((r)*(((-56)*(M))+((5)*(r)))))))+(((12)*(((13)*(pow(a,3)))+((a)*((r)*(((-282)*(M))+((13)*(r)))))))+(((13.3333333333333333333333333333)*(((23)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((23)*(r)))))))+((0.666666666666666666666666666667)*(((131)*(pow(a,3)))+((a)*((r)*(((-1702)*(M))+((131)*(r)))))))))))));
} else {
coeffs[167] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-34)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((720)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((5376)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-2970)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*((r)*(expr[0])))))+(((((131)*(pow(a,3)))+((a)*((r)*(((-1702)*(M))+((131)*(r))))))*(expr[1]))+(((-140)*((((5)*(pow(a,3)))+((a)*((r)*(((-56)*(M))+((5)*(r))))))*(expr[2])))+(((42)*((((13)*(pow(a,3)))+((a)*((r)*(((-282)*(M))+((13)*(r))))))*(expr[3])))+(((60)*((((23)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((23)*(r))))))*(expr[4])))+((-1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_168(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[168] = ((0.328125000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.04761904761904761904761904762));
} else {
coeffs[168] = ((0.328125000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((5)*(expr[1]))+(((-5)*(expr[2]))+((-1)*(expr[3]))))));
}
}

void compute_coeffs_scalar_169(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[169] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-1.04761904761904761904761904762)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r)))))+((0.285714285714285714285714285714)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))));
} else {
coeffs[169] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((-15)*((a)*((M)*((r)*(expr[2])))))+((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_170(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[170] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[170] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((5)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_171(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[171] = ((0.656250000000000000000000000000)*((1.73205080756887729352744634151)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[171] = ((0.656250000000000000000000000000)*((1.73205080756887729352744634151)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((5)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_172(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[172] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[172] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((-5)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_173(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[173] = ((1.31250000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((6)*(pow(a,3)))+(((-33)*((a)*((M)*(r))))+((6)*((a)*(pow(r,2)))))))+(((0.444444444444444444444444444444)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+((0.666666666666666666666666666667)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))))))));
} else {
coeffs[173] = ((1.31250000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1]))+(((-5)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((((6)*(pow(a,3)))+(((-33)*((a)*((M)*(r))))+((6)*((a)*(pow(r,2))))))*(expr[3]))+((2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_174(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[174] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[174] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-28)*(expr[1]))+(((70)*(expr[2]))+(((-28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_175(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[175] = ((0.0937500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((90)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((8)*(pow(a,3)))+((4)*((a)*((r)*(((-25)*(M))+((2)*(r))))))))+(((-8)*(((2)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((2)*(r)))))))+((0.222222222222222222222222222222)*(((48)*(pow(a,3)))+((3)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))))))));
} else {
coeffs[175] = ((0.0937500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((((8)*(pow(a,3)))+((4)*((a)*((r)*(((-25)*(M))+((2)*(r)))))))*(expr[1]))+(((210)*((a)*((M)*((r)*(expr[2])))))+(((-28)*((((2)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((2)*(r))))))*(expr[3])))+((((48)*(pow(a,3)))+((3)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_176(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[176] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[176] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-20)*(expr[1]))+(((-70)*(expr[2]))+(((252)*(expr[3]))+((-165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_177(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[177] = ((0.0234375000000000000000000000000)*((11.6833214455479226106621848926)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[177] = ((0.0234375000000000000000000000000)*((11.6833214455479226106621848926)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-20)*(expr[1]))+(((-70)*(expr[2]))+(((252)*(expr[3]))+((-165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_178(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[178] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[178] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((20)*(expr[1]))+(((70)*(expr[2]))+(((-252)*(expr[3]))+((165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_179(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[179] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*(r))))+(((10)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((28)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((3.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-41)*(M))+((4)*(r)))))))+(((-4)*(((17)*(pow(a,3)))+((a)*((r)*(((-88)*(M))+((17)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((26)*(M))+((17)*(r)))))))))))));
} else {
coeffs[179] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-252)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((165)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((9)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((26)*(M))+((17)*(r)))))*(expr[1]))))+(((70)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((-14)*((((17)*(pow(a,3)))+((a)*((r)*(((-88)*(M))+((17)*(r))))))*(expr[3])))+(((15)*((((4)*(pow(a,3)))+((a)*((r)*(((-41)*(M))+((4)*(r))))))*(expr[4])))+((55)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_180(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[180] = ((0.984375000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.03174603174603174603174603175));
} else {
coeffs[180] = ((0.984375000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((4)*(expr[1]))+(((-10)*(expr[2]))+(((4)*(expr[3]))+(expr[4]))))));
}
}

void compute_coeffs_scalar_181(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[181] = ((0.984375000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.03174603174603174603174603175));
} else {
coeffs[181] = ((0.984375000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((4)*(expr[1]))+(((-10)*(expr[2]))+(((4)*(expr[3]))+(expr[4]))))));
}
}

void compute_coeffs_scalar_182(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[182] = ((0.492187500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[182] = ((0.492187500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-4)*(expr[1]))+(((10)*(expr[2]))+(((-4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_183(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[183] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.22222222222222222222222222222)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.190476190476190476190476190476)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((0.888888888888888888888888888889)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+((-1.14285714285714285714285714286)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))))))));
} else {
coeffs[183] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[1])))+(((-4)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((-4)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((4)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_184(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[184] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[184] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_185(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[185] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[185] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_186(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[186] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[186] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_187(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[187] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-12.1090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*((pow(a,3))+((a)*((r)*(((14)*(M))+(r))))))+((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[187] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((3)*(((pow(a,3))+((a)*((r)*(((14)*(M))+(r)))))*(expr[1])))+(((-28)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((-12)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[4])))+((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_188(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[188] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[188] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-51)*(expr[1]))+(((210)*(expr[2]))+(((-238)*(expr[3]))+(((45)*(expr[4]))+((33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_189(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[189] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[189] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-51)*(expr[1]))+(((210)*(expr[2]))+(((-238)*(expr[3]))+(((45)*(expr[4]))+((33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_190(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[190] = ((0.00585937500000000000000000000000)*((26.1247009552262626468971346971)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[190] = ((0.00585937500000000000000000000000)*((26.1247009552262626468971346971)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((51)*(expr[1]))+(((-210)*(expr[2]))+(((238)*(expr[3]))+(((-45)*(expr[4]))+((-33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_191(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[191] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((16)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r)))))))+(((8)*(((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r)))))))+(((4)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+((-8)*(((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r))))))))))))));
} else {
coeffs[191] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((51)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((238)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-6)*((((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r))))))*(expr[1])))+(((40)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[2])))+(((28)*((((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r))))))*(expr[3])))+(((-36)*((((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r))))))*(expr[4])))+((22)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_192(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[192] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[192] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((-5)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_193(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[193] = ((0.984375000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.01587301587301587301587301587));
} else {
coeffs[193] = ((0.984375000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-7)*(expr[1]))+(((15)*(expr[2]))+(((-5)*(expr[3]))+((-4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_194(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[194] = ((1.96875000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.01587301587301587301587301587));
} else {
coeffs[194] = ((1.96875000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-7)*(expr[1]))+(((15)*(expr[2]))+(((-5)*(expr[3]))+((-4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_195(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[195] = ((0.984375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[195] = ((0.984375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((7)*(expr[1]))+(((-15)*(expr[2]))+(((5)*(expr[3]))+((4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_196(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[196] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.984126984126984126984126984127)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-0.400000000000000000000000000000)*((a)*(((4)*(pow(a,2)))+((r)*(((37)*(M))+((4)*(r)))))))+((0.285714285714285714285714285714)*(((16)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((16)*(r))))))))))));
} else {
coeffs[196] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((21)*((a)*((M)*((r)*(expr[1])))))+(((-1)*((a)*((((4)*(pow(a,2)))+((r)*(((37)*(M))+((4)*(r)))))*(expr[2]))))+(((((16)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((16)*(r))))))*(expr[3]))+((-12)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_197(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[197] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[197] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_198(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[198] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[198] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_199(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[199] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[199] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

}
